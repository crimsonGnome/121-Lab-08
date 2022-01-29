// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <string>

#include "joey.h"
#include "kangaroo.h"

using std::string;

#ifndef DOE_H
#define DOE_H

// Doe class here.

class Doe : public Kangaroo {
 private:
  Joey joey_;

 public:
  // Constructor
  Doe();
  Doe(string name, string joeyName);

  // memeber functions
  Joey& GetJoey() { return joey_; };
  void Bounce();
};

#endif  // DOE_H
