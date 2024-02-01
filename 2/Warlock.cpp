#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string n, std::string t): _name(n), _title(t) {
 std::cout << _name << ": This looks like another boring day.\n";
}

Warlock::Warlock(const Warlock& o) {
  (void)o;
}

Warlock& Warlock::operator=(const Warlock& o) {
  (void)o;
  return *this;
} 

Warlock::~Warlock() {
  for (std::map<std::string, ASpell*>::iterator it = _book._book.begin(); it != _book._book.end(); ++it)
     delete it->second;
  _book._book.clear();
  std::cout << _name << ": My job here is done!\n";
}

const std::string& Warlock::getName() const {
 return _name;
}

const std::string& Warlock::getTitle() const {
 return _title;
}

void Warlock::setTitle(const std::string& t) {
 _title = t;
}

void Warlock::introduce() const {
 std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

void Warlock::learnSpell(ASpell* s) {
  _book.learnSpell(s);
}

void Warlock::forgetSpell(std::string name) {
  _book.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget& t) {
  ASpell *s = _book.createSpell(name);
  if (s)
    t.getHitBySpell(*s);
}