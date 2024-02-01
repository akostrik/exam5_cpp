#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
  private:
          std::string  _type;
                       ATarget       ();
                       ATarget       (const ATarget& o);
          ATarget&     operator=     (const ATarget& o);

  public:
                       ATarget       (std::string t);
  virtual              ~ATarget      ();
  const   std::string& getType       () const;
  virtual ATarget*     clone         () const = 0;
          void         getHitBySpell (const ASpell& s) const;
};