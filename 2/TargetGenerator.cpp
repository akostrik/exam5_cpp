#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& o) {
  (void)o;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& o) {
  (void)o;
  return *this;
}

TargetGenerator::~TargetGenerator() {
  for(std::map<std::string, ATarget*>::iterator it = _book.begin(); it != _book.end(); ++it)
    delete it->second;
  _book.clear();
}

void TargetGenerator::learnTargetType(ATarget* s) {
  if(s && _book.find(s->getType()) == _book.end())
    _book[s->getType()] = s->clone();
}

void TargetGenerator::forgetTargetType(const std::string& name) {
  if(_book.find(name) != _book.end()) {
    delete _book[name];
    _book.erase(name);
  }
}

ATarget* TargetGenerator::createTarget(const std::string& name) {
  if(_book.find(name) != _book.end())
    return _book[name]->clone();
  else
    return NULL;
}