#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main() {
  Warlock       warlock("WallockName", "WarlockTitle");
  Dummy         dummy;
  Fwoosh*       spell = new Fwoosh();
  warlock.learnSpell(spell);
  warlock.introduce();
  warlock.launchSpell("Fwoosh", dummy);
  warlock.forgetSpell("Fwoosh");
  warlock.launchSpell("Fwoosh", dummy);
  delete spell;
}