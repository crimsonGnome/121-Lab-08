// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "button.h"

#include <iostream>
#include <string>

#include "rect.h"

using std::cout, std::string;

Button::Button() {
  this->buttonName_ = "name";
  this->active_ = false;
}

Button::Button(string buttonName, Rect rectangle) {
  this->buttonName_ = buttonName;
  this->rectangle_ = rectangle;
  this->active_ = false;
}

void Button::Click() { cout << "Clicked " << GetName(); }
