// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "rect.h"

Rect::Rect(int x, int y, int width, int height) {
  this->x_ = x;
  this->y_ = y;
  this->width_ = width;
  this->height_ = height;
}

bool Rect::Contains(int x, int y) {
  // position + width - input position less then equal to width
  // position + width - input position greater then  equal to 0
  // position + height - input position less then equal to height
  // position + height - input position greater then  equal to 0
  if ((x_ + width_ - x <= width_ && x_ + width_ - x >= 0) &&
      (y_ + height_ - y <= height_ && y_ + height_ - y >= 0)) {
    return true;
  } else {
    return false;
  }
}
