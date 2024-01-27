#pragma once
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget {               /// public

  public:
              Dummy  ();
              ~Dummy ();
  ATarget*    clone  () const;                /// Dummy* ATarget ?
};