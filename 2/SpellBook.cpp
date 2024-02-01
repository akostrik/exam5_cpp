#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(const SpellBook& o) {
  (void)o;
}

SpellBook& SpellBook::operator=(const SpellBook& o) {
  (void)o;
  return *this;
}

SpellBook::~SpellBook() {
  for(std::map<std::string, ASpell*>::iterator it = _book.begin(); it != _book.end(); ++it)
    delete it->second;
  _book.clear();
}

void SpellBook::learnSpell(ASpell* s) {
  if(s && _book.find(s->getName()) == _book.end())
    _book[s->getName()] = s->clone();
}

void SpellBook::forgetSpell(const std::string& name) {
  if(_book.find(name) != _book.end()) {
    delete _book[name];
    _book.erase(name);
  }
}

ASpell* SpellBook::createSpell(const std::string& name) {
  if(_book.find(name) != _book.end())
    return _book[name]->clone();
  else
    return NULL;
}