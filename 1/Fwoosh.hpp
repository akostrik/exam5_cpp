#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell {             /// public

  public:
                    Fwoosh     ();
                    ~Fwoosh    ();
  ASpell*           clone      () const;
};