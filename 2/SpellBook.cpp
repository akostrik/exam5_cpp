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
// COPIES a spell in the book
void SpellBook::learnSpell (ASpell* spell) {
	if (spell)
		_book[spell->getName()] = spell->clone();
}

// deletes a spell from the book, except if it isn't there
void SpellBook::forgetSpell(const std::string& spellName) {
  std::map<std::string, ASpell*>::iterator it = _book.find(spellName);
  if (it != _book.end()) {
    delete it->second;
    _book.erase(it);
  }
}

// receives a string corresponding to the name of a spell, creates it, and returns it
ASpell* SpellBook::createSpell(const std::string& spellName) {
	ASpell* newSpell = NULL;
  if (_book.find(spellName) != _book.end())
    newSpell = _book[spellName];
  return (newSpell);
}