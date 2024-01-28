# include "ATarget.hpp"

ATarget::ATarget() { // ?
};

ATarget::ATarget(std::string const type): _type(type) {
};

ATarget::ATarget(const ATarget& obj) {
  *this = obj;
};

ATarget::~ATarget() {
};

ATarget& ATarget::operator = (const ATarget& obj) {
  _type = obj.getType();
  return *this;
};

const std::string& ATarget::getType() const {
  return _type;
};

void ATarget::getHitBySpell(const ASpell& spell) const {
  std::cout << _type << " has been " << spell.getEffects() << "!\n";
}

