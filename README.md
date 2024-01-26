Make a Warlock class. It has to be in Coplien's form.
* Expected files : Warlock.cpp Warlock.hpp
* Private attributes :
```
name (string)
title (string)
```
* getters
```
getName, returns a reference to constant string
getTitle, returns a reference to constant string
Both these functions will have to be callable on a constant Warlock.
```
* setter: 
```
setTitle, returns void and takes a reference to constant string
```
* Your Warlock will also have a constructor that takes, in this order, its name and title.  
* Your Warlock will not be able to be copied, instantiated by copy, or instantiated without a name and a title.
For example :
```
Warlock bob;                            //Does not compile
Warlock bob("Bob", "the magnificent");  //Compiles
Warlock jim("Jim", "the nauseating");   //Compiles
bob = jim;                              //Does not compile
Warlock jack(jim);                      //Does not compile
```
* Upon creation, the Warlock says: `<NAME>: This looks like another boring day.` Of course, whenever we use placeholders like <NAME>, <TITLE>, etc... in outputs, you will replace them by the appropriate value. Without the < and >.  
When he dies, he says: `<NAME>: My job here is done!`  
* Our Warlock must also be able to introduce himself, while boasting with all its might.
* So you will write the following function: ` void introduce() const;

It must display:

<NAME>: I am <NAME>, <TITLE>!

Here's an example of a test main function and its associated output:

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

https://github.com/42YerevanProjects/Exam_Ranks/tree/master/exam_rank05  
https://github.com/Saxsori/42-ExamRank05  
https://github.com/pasqualerossi/42-School-Exam-Rank-05  
https://github.com/NahIIo/examrank-02-03-04-05-06/tree/master/examRank05  
