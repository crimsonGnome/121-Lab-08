// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "kangaroo.h"

#include <iostream>
#include <string>

using std::cout, std::string;

// ------------------ Consructor -------------------------
Kangaroo::Kangaroo() {
  this->name_ = "Kangaroo";
  this->bounce_ = 0;
}

Kangaroo::Kangaroo(string name) {
  this->name_ = name;
  this->bounce_ = 0;
}
// ------------------ Consructor End -------------------------
// ------------------ Protected Start ------------------------

void Kangaroo::SetBounce() {
  int tempBounce = GetBounceCount();
  this->bounce_ = tempBounce + 1;
}
// ------------------ Protected End --------------------------
// ------------------ Publice Start --------------------------

void Kangaroo::Bounce() {
  this->SetBounce();
  cout << GetName() << " goes boing\n";
}
// ------------------ Publice Start --------------------------
