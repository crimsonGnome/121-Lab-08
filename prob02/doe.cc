// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "doe.h"

#include <iostream>
#include <string>

using std::cout, std::string;
// ------------------ Start of Consructors -----------------------

Doe::Doe() : Kangaroo("Doe") {}

Doe::Doe(string name, string joeyName) : Kangaroo(name) {
  Joey temp(joeyName);
  this->joey_ = temp;
}
// ------------------ End of Consructors -------------------------
// ----------------- Start of Memever Functions ------------------

void Doe::Bounce() {
  this->SetBounce();
  cout << GetName() << " goes boing\n";
  this->joey_.Bounce();
}
