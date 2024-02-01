#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
  private:
                      TargetGenerator   (const TargetGenerator& o);
        TargetGenerator&    operator=   (const TargetGenerator& o);

  public :
        std::map<std::string, ATarget*> _book;
                      TargetGenerator   ();
                      ~TargetGenerator  ();
        void          learnTargetType(ATarget*);
        void          forgetTargetType(const std::string& name);
        ATarget*      createTarget(const std::string& name);
};