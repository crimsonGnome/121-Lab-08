// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "toggle_button.h"

#include <iostream>
#include <string>

#include "button.h"
#include "rect.h"

using std::cout, std::string;

ToggleButton::ToggleButton() { this->toggleButtonFlag_ = false; }

ToggleButton::ToggleButton(string name, Rect r) : Button(name, r) {
  // Calling the button class constructor
  this->toggleButtonFlag_ = false;
}

void ToggleButton::Click() {
  this->toggleButtonFlag_ = !toggleButtonFlag_;
  cout << "Clicked " << GetName()
       << ((GetEnabled()) ? " (enabled)\n" : " (disabled)\n");
}
