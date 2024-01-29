#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {

  protected:                                                                                         ///
             std::string  _name;
             std::string  _effects;

  public:
                          ASpell     ();
                          ASpell     (const std::string name, const std::string effects);
                          ASpell     (const ASpell& obj);
             ASpell&      operator=  (const ASpell& obj);
  virtual                 ~ASpell    ();

  public:
  const      std::string  getName    ()                                                    const;
  const      std::string  getEffects ()                                                    const;
  virtual    ASpell*      clone      ()                                                    const = 0; /// virtual virtual
             void         launch     (const ATarget& target);
};
