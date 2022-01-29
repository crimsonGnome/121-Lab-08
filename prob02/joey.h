// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "kangaroo.h"

#ifndef JOEY_H
#define JOEY_H

#include <string>

// Joey class here.
using std::string;

class Joey : public Kangaroo {
 public:
  // Constructor
  Joey();
  explicit Joey(string name);
};

#endif  // JOEY_H
