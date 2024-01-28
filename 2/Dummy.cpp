# include "Dummy.hpp"

Dummy::Dummy() {
  _type = "Target Practice Dummy";
};


Dummy::~Dummy() {
};

ATarget* Dummy::clone () const {
  return new Dummy();
}
