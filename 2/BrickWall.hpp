#pragma once
#include <iostream>
#include "ATarget.hpp"

class BrickWall.hpp : public ATarget {

  public:
              BrickWall  ();
              ~BrickWall ();
  ATarget*    clone  () const;
};