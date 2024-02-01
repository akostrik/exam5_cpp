#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock {
  private:
         std::string  _name;
         std::string  _title;
         SpellBook    _book;
                      Warlock    ();
                      Warlock    (const Warlock& o);
         Warlock&     operator=  (const Warlock& o);

  public:
                      Warlock    (std::string n, std::string t);
                      ~Warlock   ();
  const std::string&  getName    () const;
  const std::string&  getTitle   () const;
        void          setTitle   (const std::string& t);
        void          introduce  () const;
        void          learnSpell (ASpell* s);
        void          forgetSpell(std::string n);
        void          launchSpell(std::string n, ATarget& t);
};