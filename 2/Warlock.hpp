#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"

class Warlock {

  private:
  std::string                     _name;
  std::string                     _title;
  SpellBook                       _book;
                                  Warlock    ();
                                  Warlock    (const Warlock& obj);
  Warlock&                        operator = (const Warlock& obj);

  public:
                                  Warlock    (const std::string name, const std::string title);
                                  ~Warlock   ();
  const std::string&              getName    ()                                                   const;
  const std::string&              getTitle   ()                                                   const;
  void                            introduce  ()                                                   const;
  void                            setTitle   (const std::string& title);
  void                            learnSpell (ASpell* spell);
  void                            forgetSpell(std::string spellName);
  void                            launchSpell(std::string spellName, ATarget& target);
};