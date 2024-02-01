#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main() {
  Warlock       w("name", "title");
  Dummy         d;
  Fwoosh*       s = new Fwoosh();
  w.learnSpell(s);
  w.introduce();
  w.launchSpell("S1", d);
  w.forgetSpell("S1");
  w.launchSpell("S1", d);
  w.forgetSpell("S1");
  w.forgetSpell("S2");
  Fwoosh*       s2 = NULL;
  w.learnSpell(s2);
  delete s;
}