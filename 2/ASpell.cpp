#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string n, std::string t): _name(n), _effects(t) {
}

ASpell::ASpell(const ASpell& o) {
  *this = o;
}

ASpell& ASpell::operator=(const ASpell& o) {
  _name    = o.getName();
  _effects = o.getEffects();
  return *this;
}

ASpell::~ASpell() {}

const std::string ASpell::getName() const {
  return _name;
}

const std::string ASpell::getEffects() const {
  return _effects;
}

void ASpell::launch(const ATarget& t) const {
  t.getHitBySpell(*this);
}
