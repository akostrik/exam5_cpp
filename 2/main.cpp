#include "Warlock.hpp"

int main() {
  Warlock const    richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
  Warlock*         jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();
  delete jack;

  //Warlock bob;                            // Does not compile, can not be instantiated without a name and a title
  Warlock bob("Bob", "the magnificent");
  Warlock jim("Jim", "the nauseating");
  //bob = jim;                              // Does not compile, can not be copied without a name and a title
  //Warlock jack(jim);                      // Does not compile, can not be instantiated by copy a name and a title

  return (0);
}