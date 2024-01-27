#pragma once
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget {                    /// public

  public:
                    Dummy       ();
                    ~Dummy      ();
  const ATarget*    clone () const;                /// Dummy* ATarget ?
};