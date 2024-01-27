# include "ASpell.hpp"

ATarget::ATarget(std::string const &name, std::string const &effects) {
  this->name    = name;
  this->effects = effects;
};

ATarget::ATarget(const ATarget& obj) {
  *this = obj;
};

ATarget::~ATarget() {
};

ATarget& ATarget::operator = (const ATarget& obj) {
  this->name    = obj.getName();
  this->effects = obj.getEffects();
  return *this;
};

std::string const &Warlock::getName() const {
  return this->name;
};

std::string const &ATarget::getEffects() const {
  return this->effects;
};

void ATarget::launch(const &ATarget t) {
  t.getHitBySpell(this);
};

