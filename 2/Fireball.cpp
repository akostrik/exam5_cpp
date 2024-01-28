# include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {
};

Fireball::~Fireball() {
};

Spell* Fireball::clone () const {
  return new Fireball();
};

