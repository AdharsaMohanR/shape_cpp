#ifndef __POLYGON_H
#define __POLYGON_H

#include"shapes.h"

class Polygon:public IShape {
  int sides;
  public:
  Polygon(int );   //no.of sides
};

#endif
