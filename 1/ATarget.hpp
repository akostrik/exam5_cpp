#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;                                                                                       ///

class ATarget {

  protected:
  std::string            _type;

  public:
                         ATarget       ();
                         ATarget       (const std::string type);
  virtual                ~ATarget      ();                                   /// virtual
                         ATarget       (const ATarget& obj);
  ATarget&               operator =    (const ATarget& obj);
  const std::string&     getType       ()                         const;
  virtual const ATarget* clone         ()           const = 0; /// virtual
  void                   getHitBySpell (const ASpell&);
};
