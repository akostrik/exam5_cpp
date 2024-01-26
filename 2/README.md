# Warlock
Make a Warlock class. It has to be in Coplien's form.
* Expected files Warlock.cpp Warlock.hpp
* Private attributes :
```
name (string)
title (string)
```
* getters (both getters will have to be callable on a constant Warlock), setter 
```
getName, returns a reference to constant string
getTitle, returns a reference to constant string
setTitle, returns void and takes a reference to constant string
```
* A constructor that takes, in this order, its name and title
* Warlock is not able to be copied, instantiated by copy, or instantiated without a name and a title:
```
Warlock bob;                            //Does not compile
Warlock bob("Bob", "the magnificent");  //Compiles
Warlock jim("Jim", "the nauseating");   //Compiles
bob = jim;                              //Does not compile
Warlock jack(jim);                      //Does not compile
```
* Upon creation, the Warlock says: `<NAME>: This looks like another boring day.` Replace placeholder <NAME> by the appropriate value.    
* When he dies, he says: `<NAME>: My job here is done!`  
* Warlock is able to introduce himself: ` void introduce() const;` must display: `<NAME>: I am <NAME>, <TITLE>!`

Example:
```
int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;
  return (0);
}
```
```
~$ ./a.out | cat -e
Richard: This looks like another boring day.$
Richard: I am Richard, Mistress of Magma!$
Richard - Mistress of Magma$
Jack: This looks like another boring day.$
Jack: I am Jack, the Long!$
Jack: I am Jack, the Mighty!$
Jack: My job here is done!$
Richard: My job here is done!$
~$
```
# 2
* Expected files Warlock.cpp Warlock.hpp ASpell.hpp ASpell.cpp ATarget.hpp ATarget.cpp Fwoosh.hpp Fwoosh.cpp Dummy.hpp Dummy.cpp
* the switch statement is forbidden
* Create an abstract class called ASpell, in Coplien's form:
```
name (string)     // protected attribute
effects (string)  // protected attribute
constructor       // takes its name and its effects, in that order
getName()         // that 
getEffects()      // returns strings
clone             // pure method that returns a pointer to ASpell
a launch function // takes a reference to constant ATarget
```
* All these functions can be called on a constant object.

* Create an ATarget abstract class, in Coplien's form:
```
string type      // attribute
constructor      // that takes its type
getType()        // returns a reference to constant string
clone()          // a pure method
getHitBySpell()  // function takes a reference to constant ASpell, displays <TYPE> has been <EFFECTS>! (<TYPE> is the ATarget's type, <EFFECTS> is the return of the ASpell's getEffects function)
```
* All these functions can be called on a constant object.

This one will simply call the getHitBySpell of the passed object, passing the current instance as parameter.

When all this is done, create an implementation of ASpell called Fwoosh. Its default constructor will set the name to "Fwoosh" and the effects to "fwooshed". You will, of course, implement the clone() method. In the case of Fwoosh, it will return a pointer to a new Fwoosh object.

In the same way, create a concrete ATarget called Dummy, the type of which is "Target Practice Dummy". You must also implement its clone() method.

Add to the Warlock the following member functions:

* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  Warlock forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.

You will need a new attribute to store the spells your Warlock knows. Several
types fit the bill, it's up to you to choose the best one.

Below is a possible test main and its expected output:

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

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


https://github.com/42YerevanProjects/Exam_Ranks/tree/master/exam_rank05  
https://github.com/Saxsori/42-ExamRank05  
https://github.com/pasqualerossi/42-School-Exam-Rank-05  
https://github.com/NahIIo/examrank-02-03-04-05-06/tree/master/examRank05  
