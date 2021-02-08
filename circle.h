#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shapes.h"

class Circle : public IShape {
  double m_radius;

public:
  const static double PI = 3.14;
  Circle(double);
  double area();
  double circum();
};

