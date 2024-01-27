# include "ASpell.hpp"

ATarget::ATarget(std::string const type) {
  this->type = type;
};

ATarget::ATarget(const ATarget& obj) {
  *this = obj;
};

ATarget::~ATarget() {
};

ATarget& ATarget::operator = (const ATarget& obj) {
  this->type = obj.getType();
  return *this;
};

std::string const &ATarget::getType() const {
  return this->type;
};

void ATarget::getHitBySpell(const &ASpell s) {
  std::cout << this->type << " has been " << s->getEffects() << "!\n";
}

