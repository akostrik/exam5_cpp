# include "Warlock.hpp"

Warlock::Warlock() {
};

Warlock::Warlock(std::string const name, std::string const title) {
  _name  = name;
  _title = title;
  std::cout << _name << ": This looks like another boring day." << std::endl;
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
  std::cout << _name << ": My job here is done!" << std::endl;
};


////////////////////////////////////////////////////////////////////
std::string const &Warlock::getName() const {
  return _name;
};

std::string const &Warlock::getTitle() const {
  return _title;
};

void Warlock::Warlock::introduce() const {
  std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
};

void Warlock::setTitle (std::string const &title) {
  _title = title;
}