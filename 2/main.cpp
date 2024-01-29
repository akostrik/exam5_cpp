#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"
#include "BrickWall.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"

int main()
{
  Warlock warlock1("Warlock1", "title1");
  warlock1.setTitle("title2");
  BrickWall model1;

  Polymorph* spell1 = new Polymorph();
  TargetGenerator tarGen;
  tarGen.learnTargetType(&model1);
  warlock1.learnSpell(spell1);

  Fireball* spell2 = new Fireball();

  warlock1.learnSpell(spell2);
  ATarget* target1 = tarGen.createTarget("Target1");

  warlock1.introduce();
  warlock1.launchSpell("spell1", *target1);
  warlock1.launchSpell("spell3", *target1);
}