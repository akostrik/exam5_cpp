#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
  private :
                                    TargetGenerator  (const TargetGenerator& obj);
  TargetGenerator&                  operator=        (const TargetGenerator& obj);
  std::map < std::string, ATarget*> _target;

  public :
                                    TargetGenerator  ();
                                    ~TargetGenerator ();
  void                              learnTargetType  (ATarget*);
  void                              forgetTargetType (const std::string&);
  ATarget*                          createTarget     (const std::string&);
};