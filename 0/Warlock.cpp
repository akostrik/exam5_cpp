#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(std::string n, std::string t): _name(n), _title(t) {
  std::cout << _name << ": This looks like another boring day.\n";
}

Warlock::Warlock(const Warlock& o) {}

Warlock& Warlock::operator=(const Warlock& o) {
  return *this;
}

Warlock::~Warlock() {
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