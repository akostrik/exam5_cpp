Make a Warlock class. It has to be in Coplien's form.
* Expected files : Warlock.cpp Warlock.hpp
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
* Warlock has a constructor that takes, in this order, its name and title.  
* Warlock is not able to be copied, instantiated by copy, or instantiated without a name and a title:
```
Warlock bob;                            //Does not compile
Warlock bob("Bob", "the magnificent");  //Compiles
Warlock jim("Jim", "the nauseating");   //Compiles
bob = jim;                              //Does not compile
Warlock jack(jim);                      //Does not compile
```
* Upon creation, the Warlock says: `<NAME>: This looks like another boring day.` Replace placeholder <NAME> by the appropriate value.    
** When he dies, he says: `<NAME>: My job here is done!`  
* Warlock is able to introduce himself, while boasting with all its might: 
` void introduce() const;` must display: `<NAME>: I am <NAME>, <TITLE>!`

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
https://github.com/42YerevanProjects/Exam_Ranks/tree/master/exam_rank05  
https://github.com/Saxsori/42-ExamRank05  
https://github.com/pasqualerossi/42-School-Exam-Rank-05  
https://github.com/NahIIo/examrank-02-03-04-05-06/tree/master/examRank05  
