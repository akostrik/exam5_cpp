# include "Dummy.hpp"

Dummy::Dummy() {
  _type = "Target Practice Dummy";
};


Dummy::~Dummy() {
};

// if type is Dummy ?
const ATarget* Dummy::clone () const {
  return new Dummy();
}
