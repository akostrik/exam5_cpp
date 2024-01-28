# include "SpellBook.hpp"

SpellBook::SpellBook() {
};

SpellBook::SpellBook(const SpellBook& obj) {
  *this = obj;
};

SpellBook::~SpellBook() {
};

SpellBook& SpellBook::operator = (const SpellBook& obj) {
  _name = obj.getName(); // не обязательно?
  _effects = obj.getEffects();
  return *this;
};

void SpellBook::learnSpell (ASpell*) { // COPIES a spell in the book
}

void SpellBook::forgetSpell(string const &) { // deletes a spell from the book, except if it isn't there
}

ASpell* SpellBook::createSpell(string const &) { // receives a string corresponding to the name of a spell, creates it, and returns it
}