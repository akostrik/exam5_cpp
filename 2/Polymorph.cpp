# include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critte") {
};

Polymorph::~Polymorph() {
};

ASpell* Polymorph::clone () const {
  return new Polymorph();
};

