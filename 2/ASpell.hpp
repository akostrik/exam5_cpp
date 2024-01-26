#ifndef ASPELL_HPP                                                                        ///
# define ASPELL_HPP

# include <string>                                                                         ///
# include <iostream>

constructor                   // takes its name and its effects, in that order
getName()                     // callable on a constant object
getEffects()                  // returns strings, callable on a constant object
clone                         // pure method, returns a pointer to ASpell, callable on a constant object
a launch function             // takes a reference to constant ATarget,calls the getHitBySpell of the passed object, passing the current instance as parameter


class ASpell {

  protected:
  std::string name;
  std::string effects;

                    ASpell    ();
                    ASpell    (const ASpell& obj);                                       /// const
  ASpell&          operator = (const ASpell& obj);

  public:
                    ASpell    (const std::string &name, const std::string &title);        /// const, &
                    ~ASpell   ();

  const std::string &getName   ()                                                   const; /// const const
  const std::string &getTitle  ()                                                   const;
  void              introduce  ()                                                   const; /// const
  void              setTitle   (const std::string &title);
};

#endif