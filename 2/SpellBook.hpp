#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook {
  private:
                      SpellBook   (const SpellBook& o);
        SpellBook&    operator=   (const SpellBook& o);

  public :
        std::map<std::string, ASpell*> _book;
                      SpellBook   ();
                      ~SpellBook  ();
        void          learnSpell  (ASpell* s);
        void          forgetSpell (const std::string& name);
        ASpell*       createSpell (const std::string& name);
};