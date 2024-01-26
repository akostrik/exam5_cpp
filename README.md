# 1
## Warlock class in Coplien's form 
* Upon creation, the Warlock says: `<NAME>: This looks like another boring day.`
* When he dies, he says: `<NAME>: My job here is done!`  
```
private std::string name                         
private std::string title                         
constructor(name, title)
getName                                   // returns a ref to const string, callable on a constant Warlock
getTitle                                  // returns a ref to const string, callable on a constant Warlock
void setTitle(a ref to const std::string)
void introduce() const
```
```
  Warlock bob;                            // does not compile, can not be instantiated without a name and a title
  Warlock bob("Bob", "the magnificent");  // compiles
  Warlock jim("Jim", "the nauseating");   // compiles
  bob = jim;                              // does not compile, can not be copied without a name and a title
  Warlock jack(jim);                      // does not compile, can not be instantiated by copy a name and a title
```
```
int main() {
  Warlock const    richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
  Warlock*         jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();
  delete jack;
  return (0);
}

~$ ./a.out | cat -e
Richard: This looks like another boring day.$
Richard: I am Richard, Mistress of Magma!$
Richard - Mistress of Magma$
Jack: This looks like another boring day.$
Jack: I am Jack, the Long!$
Jack: I am Jack, the Mighty!$
Jack: My job here is done!$
Richard: My job here is done!$
```
# 2
## **ASpell**, abstract class in Coplien's form
* `switch` is forbidden
```
protected std::string name
protected std::string effects
constructor(name, effects)
getName()                     // callable on a constant object
std::string getEffects()      // callable on a constant object
ASpell * clone                // pure method, callable on a constant object
launch(const &ATarget)        // takes a ref to constant ATarget, calls the getHitBySpell of the passed object, passing the current instance as parameter
```

## **ATarget**, abstract class in Coplien's form
```
std::string type
constructor(type)
const std::string &getType()  // returns a reference to constant string
clone()                       // a pure method, callable on a constant object
getHitBySpell(const &ASpell)  // takes a reference to constant ASpell, displays <TYPE> has been <EFFECTS>! (<TYPE> = ATarget's type, <EFFECTS> = getEffects())
```

## **Fwoosh**, an implementation of ASpell
```
default constructor           // sets the name to "Fwoosh" and the effects to "fwooshed"
clone()                       // method, in the case of Fwoosh, returns a pointer to a new Fwoosh object
```

## **Dummy**, a concrete ATarget 
* its type is "Target Practice Dummy"
```
clone()
```

## Add to the Warlock: 
```
learnSpell(...)               // member function, takes a pointer to ASpell, that makes the Warlock learn a spell
forgetSpell(...)              // member function, takes a string corresponding a to a spell's name, makes the Warlock forget it. If it's not a known spell, does nothing
launchSpell(   )              // member function, takes a string (a spell name) and a reference to ATarget, that launches the spell on the selected target. If it's not a known spell, does nothing
A new attribute               // store the spells your Warlock knows, several types fit the bill, it's up to you to choose the best one 
```

```
int main() {
  Warlock       richard("Richard", "the Titled");
  Dummy         bob;
  Fwoosh*       fwoosh = new Fwoosh();
  richard.learnSpell(fwoosh);
  richard.introduce();
  richard.launchSpell("Fwoosh", bob);
  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}

~$ ./a.out | cat -e
Richard: This looks like another boring day.$
Richard: I am Richard, the Titled!$
Target Practice Dummy has been fwooshed!$
Richard: My job here is done!$
```

# 3
## Create two spells, on the same model as Fwoosh
* `switch` is forbidden
```
Fireball (Name: "Fireball", Effects: "burnt to a crisp")
Polymorph (Name: "Polymorph", Effects: "turned into a critter")
```
* just so he won't have only dummy to attack, let's make a new target for him, which will be the BrickWall (Type: "Inconspicuous Red-brick Wall")

## SpellBook class, in canonical form
can't be copied or instantiated by copy  
```
void learnSpell(ASpell*), that COPIES a spell in the book
void forgetSpell(string const &), that deletes a spell from the book, except if it isn't there
ASpell* createSpell(string const &), that receives a string corresponding to the name of a spell, creates it, and returns it
```
Modify the Warlock, now, make it have a spell book that will be created with him and destroyed with him. Also make his learnSpell and forgetSpell functions call those of the spell book.  
The launchSpell function will have to use the SpellBook to create the spell it's attempting to launch.  

## TargetGenerator class, in canonical form
non-copyable  
```
void learnTargetType(ATarget*)        // teaches a target to the generator
void forgetTargetType(string const &) // that makes the generator forget a target type if it's known
ATarget* createTarget(string const &) // that creates a target of the specified type
```
```
int main() {
  Warlock         richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall       model1;
  Polymorph*      polymorph = new Polymorph();
  TargetGenerator tarGen;
  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);
  Fireball*       fireball = new Fireball();
  richard.learnSpell(fireball);
  ATarget*        wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}

~$ ./a.out | cat -e
Richard: This looks like another boring day.$
Richard: I am Richard, Hello, I'm Richard the Warlock!!$
Inconspicuous Red-brick Wall has been turned into a critter!$
Inconspicuous Red-brick Wall has been burnt to a crisp!$
Richard: My job here is done!$
```

# sources
* Expected files Warlock.cpp Warlock.hpp ASpell.hpp ASpell.cpp ATarget.hpp ATarget.cpp Fwoosh.hpp Fwoosh.cpp Dummy.hpp Dummy.cpp
* Expected files Warlock.cpp Warlock.hpp ASpell.hpp ASpell.cpp ATarget.hpp ATarget.cpp Fwoosh.hpp Fwoosh.cpp Dummy.hpp Dummy.cpp Fireball.hpp Fireball.cpp Polymorph.hpp Polymorph.cpp BrickWall.hpp BrickWall.cpp SpellBook.hpp SpellBook.cpp TargetGenerator.hpp TargetGenerator.cpp
https://github.com/42YerevanProjects/Exam_Ranks/tree/master/exam_rank05  
https://github.com/Saxsori/42-ExamRank05  
https://github.com/pasqualerossi/42-School-Exam-Rank-05  
https://github.com/NahIIo/examrank-02-03-04-05-06/tree/master/examRank05  
