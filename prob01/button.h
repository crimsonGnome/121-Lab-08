// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef BUTTON_H
#define BUTTON_H

#include <string>

#include "rect.h"

using std::string;
// Button class here

class Button {
 private:
  string buttonName_;
  Rect rectangle_;
  bool active_;

 public:
  // non-default consturctor
  Button();
  Button(string buttonName, Rect rectangle);

  // Getters
  bool GetActive() const { return active_; };
  Rect GetRect() const { return rectangle_; };
  string GetName() const { return buttonName_; };

  // Setters
  void SetActive(bool active) { this->active_ = active; };

  // Member Function
  void Click();
};

#endif  // BUTTON_H
