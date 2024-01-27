# include "ASpell.hpp"

ASpell::ASpell(std::string const name, std::string const effects) : _name(name), _effects(effects){
};

ASpell::ASpell(const ASpell& obj) {
  *this = obj;
};

ASpell::~ASpell() {
};

ASpell& ASpell::operator = (const ASpell& obj) {
  _name = obj.getName();
  _effects = obj.getEffects();
  return *this;
};

std::string const &ASpell::getName() const {
  return _name;
};

std::string const &ASpell::getEffects() const {
  return _effects;
};

// calls the getHitBySpell of the passed object, passing the current instance as parameter
void ASpell::launch(ATarget& target) const {
  target.getHitBySpell(*this);                                /// *
};

