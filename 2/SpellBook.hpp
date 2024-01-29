#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class SpellBook {

  private:
  std::map<std::string, ASpell*> _book;
                                 SpellBook   (const SpellBook& obj);
  SpellBook&                     operator =  (const SpellBook& obj);

  public:
                                 SpellBook  ();
                                 ~SpellBook ();
  void                           learnSpell (ASpell*);            // COPIES a spell in the book
  void                           forgetSpell(const std::string&); // deletes a spell from the book, except if it isn't there
  ASpell*                        createSpell(const std::string&); // receives a string corresponding to the name of a spell, creates it, and returns it
};