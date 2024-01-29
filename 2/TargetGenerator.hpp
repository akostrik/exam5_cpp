#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
  private :
  std::map <std::string, ATarget*>  _book;                                       ///
                                    TargetGenerator  (const TargetGenerator& obj);
  TargetGenerator&                  operator=        (const TargetGenerator& obj);

  public :
                                    TargetGenerator  ();
                                    ~TargetGenerator ();
  void                              learnTargetType  (ATarget*);
  void                              forgetTargetType (const std::string&);
  ATarget*                          createTarget     (const std::string&);
};