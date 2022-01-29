// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef TOGGLE_BUTTON_H
#define TOGGLE_BUTTON_H

#include <iostream>

#include "button.h"
#include "rect.h"

using std::string;

#include <string>

// ToggleButton class here.
class ToggleButton : public Button {
 private:
  bool toggleButtonFlag_;

 public:
  // Consturctors
  ToggleButton();
  ToggleButton(string name, Rect rectangle);

  // Getters
  bool GetEnabled() const { return toggleButtonFlag_; };

  // Setters
  void SetEnabled(bool toggle) { this->toggleButtonFlag_ = toggle; };

  // Memeber functions
  void Click();
};

#endif  // TOGGLE_BUTTON_H
