# include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects) {
  this->name    = name;
  this->effects = effects;
};

ASpell::ASpell(const ASpell& obj) {
  *this = obj;
};

ASpell::~ASpell() {
};

ASpell& ASpell::operator = (const ASpell& obj) {
  this->name    = obj.getName();
  this->effects = obj.getEffects();
  return *this;
};

std::string const &Warlock::getName() const {
  return this->name;
};

std::string const &ASpell::getEffects() const {
  return this->effects;
};

// calls the getHitBySpell of the passed object, passing the current instance as parameter
void ASpell::launch(const &ATarget t) {
  t.getHitBySpell(this);
};

