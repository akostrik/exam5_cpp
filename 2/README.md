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
