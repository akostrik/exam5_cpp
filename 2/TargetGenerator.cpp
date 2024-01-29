#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::~TargetGenerator() {
}

TargetGenerator::TargetGenerator(const TargetGenerator& obj) {
	*this = obj;
}

TargetGenerator & TargetGenerator::operator=(const TargetGenerator& obj) {
	_target = obj._target;
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget* target) {
  if (target)
    _target[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(const std::string& target) {
  if (_target.find(target) != _target.end())
    _target.erase(_target.find(target));
}

ATarget* TargetGenerator::createTarget(const std::string& target) {
  ATarget* tmp = NULL;
  if (_target.find(target) != _target.end())
    tmp = _target[target];
  return (tmp);
}