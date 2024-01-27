#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>

class ATarget {

  protected:
  std::string type;

  private:
                    ATarget       ();
                    ATarget       (const ATarget& obj);
  ASpell&           operator =    (const ATarget& obj);

  public:
                    ATarget       (const std::string &type);
                    ~ATarget      ();

  const std::string &getType      ()                         const;
  const *ATarget    clone         (const &ATarget) = 0;
  void              getHitBySpell (const &ASpell);
};

#endif