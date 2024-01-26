# include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &title) {
  this->name  = name;
  this->title = title;
  std::cout << this->name << ": This looks like another boring day." << std::endl;
};

ASpell::ASpell (const Warlock& obj) {
  *this = obj;
};

ASpell::~ASpell() {
  std::cout << this->name << ": My job here is done!" << std::endl;
};

ASpell& ASpell::operator = (const Warlock& obj) {
  this->name  = obj.getName();
  this->title = obj.getTitle();
  return *this;
};

std::string const &Warlock::getName() const {
  return this->name;
};

std::string const &ASpell::getTitle() const {
  return this->title;
};

void ASpell::ASpell::introduce() const {
  std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
};

void ASpell::ASpell (std::string const &title) {
  this->title = title;
}