#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string t): _type(t) {
}

ATarget::ATarget(const ATarget& o) {
  *this = o;
}

ATarget& ATarget::operator=(const ATarget& o) {
  _type    = o.getType();
  return *this;
}

ATarget::~ATarget() {
}

const std::string& ATarget::getType() const {
  return _type;
}

void ATarget::getHitBySpell (const ASpell& s) const {
  std::cout << _type << " has been " << s.getEffects() << "!\n";
}