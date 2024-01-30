#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::TargetGenerator(const TargetGenerator& obj) {
  *this = obj;
}

TargetGenerator & TargetGenerator::operator=(const TargetGenerator& obj) {
  _book = obj._book;
  return (*this);
}

TargetGenerator::~TargetGenerator() {
   // iterator delete ?
}

/////////////////////////////////////////////////////////
void TargetGenerator::learnTargetType(ATarget* target) {
  if (target)
    _book[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(const std::string& targetName) {
  if (_book.find(targetName) != _book.end())
    _book.erase(_book.find(targetName));
}

ATarget* TargetGenerator::createTarget(const std::string& targetName) {
  ATarget* newTarget = NULL;
  if (_book.find(targetName) != _book.end())
    newTarget = _book[targetName];
  return (newTarget);
}