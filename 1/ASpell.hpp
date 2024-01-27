#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include <iostream>

class ASpell {

  protected:
  std::string name;
  std::string effects;

  private:
                    ASpell     ();
                    ASpell     (const ASpell& obj);
  ASpell&          operator =  (const ASpell& obj);

  public:
                    ASpell     (const std::string &name, const std::string &effects);
                    ~ASpell    ();
  const std::string &getName   ()                                                     const;
  const std::string &getEfects ()                                                   b  const;
  const *ASpell     clone      (const &ATarget) = 0;
  void              launch     (const &ATarget);
};

#endif