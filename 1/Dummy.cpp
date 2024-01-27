# include "Dummy.hpp"

Dummy::Dummy() {
  _type = "Target Practice Dummy";
};


Dummy::~Dummy() {
};

// if type is Dummy ?
ATarget* Dummy::clone () const {
  return new Dummy();
}
