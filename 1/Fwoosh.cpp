# include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") { ///
};

Fwoosh::~Fwoosh() {
};

// in the case of Fwoosh
ASpell* Fwoosh::clone () const {
  return new Fwoosh();
};

