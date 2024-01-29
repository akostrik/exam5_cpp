# include "Warlock.hpp"

Warlock::Warlock() {
};

Warlock::Warlock(std::string const name, std::string const title): _name(name), _title(title) {
  std::cout << _name << ": This looks like another boring day.\n";
};

Warlock::Warlock (const Warlock& obj) {
  *this = obj;
};

Warlock::~Warlock() {
  for (std::map<std::string, ASpell*>::iterator it = _book.begin(); it != _book.end(); ++it)
    delete it->second;
  _book.clear();
  std::cout << _name << ": My job here is done!\n";
};

Warlock& Warlock::operator = (const Warlock& obj) {
  _name  = obj.getName();
  _title = obj.getTitle();
  return *this;
};

std::string const &Warlock::getName() const {
  return _name;
};

std::string const &Warlock::getTitle() const {
  return _title;
};

void Warlock::introduce() const {
  std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
};

void Warlock::setTitle (std::string const &title) {
  _title = title;
}

/////////////////////////////////////////////////////////
void Warlock::learnSpell (ASpell* spell) {
  if(spell && _book.find(spell->getName()) == _book.end()) /// spell && find end
    _book[spell->getName()] = spell->clone(); // clone
}

void Warlock::forgetSpell(std::string spellName) {
  if(_book.find(spellName) != _book.end()) {
    delete _book.find(spellName)->second;
    _book.erase(_book.find(spellName));  /// erase
  }
}

void Warlock::launchSpell(std::string spellName, ATarget& target) {
  if (_book.find(spellName) != _book.end())                
    _book[spellName]->launch(target);
}
