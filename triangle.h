#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include "polygon.h"

class Rectangle : public Polygon {
  int  length;
  int  breadth;

public:
  Rectangle(int ,int );
  double area();
  double circum();
};

#endif