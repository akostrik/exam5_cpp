# include "Warlock.hpp"

Warlock::Warlock() {
};

Warlock::Warlock(std::string const name, std::string const title): _name(name), _title(title) {
  std::cout << _name << ": This looks like another boring day.\n";
};

Warlock::Warlock (const Warlock& obj) {
  *this = obj;
};

Warlock& Warlock::operator = (const Warlock& obj) {
  _name  = obj.getName();
  _title = obj.getTitle();
  return *this;
};

Warlock::~Warlock() {
  std::cout << _name << ": My job here is done!\n";
};

const std::string &Warlock::getName() const {
  return _name;
};

const std::string &Warlock::getTitle() const {
  return _title;
};

void Warlock::setTitle (std::string const &title) {
  _title = title;
}

/////////////////////////////////////////////////////////
void Warlock::introduce() const {
  std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
};

void Warlock::learnSpell (ASpell* spell) {
  _book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName) {
  _book.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget& target) {
  if (_book.createSpell(spellName))
    _book.createSpell(spellName)->launch(target);
}