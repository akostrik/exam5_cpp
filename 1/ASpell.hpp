#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;                                                                                       ///

class ASpell {

  protected:
          std::string  _name;
          std::string  _effects;

  private:                                                                                           /// ?
                       ASpell     ();
                       ASpell     (const ASpell& obj);
          ASpell&      operator = (const ASpell& obj);

  public:
                       ASpell     (const std::string name, const std::string effects);
  virtual              ~ASpell    ();                                                               /// virtual ?
  const   std::string& getName    ()                                                     const;
  const   std::string& getEffects ()                                                     const;
  virtual ASpell*      clone      ()                                       const = 0; /// const const ? virtual
  void                 launch     (ATarget&)                                       const;     /// const
};