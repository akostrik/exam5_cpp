#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
  protected:
          std::string                   _name;
          std::string                   _effects;

  private:
                                         ASpell    ();
                                         ASpell    (const ASpell& o);
          ASpell&                        operator= (const ASpell& o);

  public :
                                         ASpell    (std::string n, std::string e);
  virtual                                ~ASpell   ();
  const   std::string                    getName   () const;
  const   std::string                    getEffects() const;
  virtual ASpell*                        clone     () const = 0;
          void                           launch    (const ATarget& t) const;
};