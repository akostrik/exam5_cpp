# include "SpellBook.hpp"

SpellBook::SpellBook() {
};

SpellBook::~SpellBook() {
  for (std::map<std::string, ASpell*>::iterator it = _book.begin(); it != _book.end(); ++it) /// iterator, ++it
    delete it->second;                                                                       /// second
  _book.clear();                                                                             /// clear
};

SpellBook::SpellBook(const SpellBook& obj) {
  *this = obj;
};

SpellBook& SpellBook::operator = (const SpellBook& obj) {
  _book = obj._book;
  return *this;
};

/////////////////////////////////////////////////////////
void SpellBook::learnSpell (ASpell* spell) {
  if (spell)
    _book[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string& spellName) {
  if (_book.find(spellName) != _book.end()) {
    delete _book.find(spellName)->second;
    _book.erase(_book.find(spellName));
  }
}

ASpell* SpellBook::createSpell(const std::string& spellName) {
  ASpell* newSpell = NULL;
  if (_book.find(spellName) != _book.end())
    newSpell = _book[spellName]->clone(); //  ?
  return (newSpell);
}