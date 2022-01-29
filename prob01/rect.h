// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#ifndef RECT_H
#define RECT_H

// Rect class here.

class Rect {
 private:
  int x_;
  int y_;
  int width_;
  int height_;

 public:
  // Constructors
  Rect() = default;
  Rect(int x, int y, int width, int height);

  // Getters
  int GetX() const { return x_; };
  int GetY() const { return y_; };
  int GetWidth() const { return width_; };
  int GetHeight() const { return height_; };

  // Setters
  void SetY(int x) { this->x_ = x; };
  void SetX(int y) { this->y_ = y; };
  void SetWidth(int width) { this->width_ = width; };
  void SetHeight(int height) { this->height_ = height; };

  // memeber functions
  bool Contains(int x, int y);
};

#endif  // RECT_H
