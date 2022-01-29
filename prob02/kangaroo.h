// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include <string>

#ifndef KANGAROO_H
#define KANGAROO_H

using std::string;

// Kangaroo class here.

class Kangaroo {
 private:
  string name_;

 protected:
  int bounce_;
  void SetBounce();

 public:
  // Constructors
  Kangaroo();
  explicit Kangaroo(string name);

  // Getters
  string GetName() const { return name_; };
  int GetBounceCount() const { return bounce_; };

  // Setters
  void SetName(string name) { this->name_ = name; };

  // memberfunctions
  void Bounce();
};

#endif  // KANGAROO_H
