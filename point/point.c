#include "point.h"
#include "../graphic/curse.h"

point pnt_init(int x, int y)
{
   point tmp = {x,y};
   return tmp;
}

point pnt_add ( point a, point b)
{
  point tmp;
  tmp.x = a.x + b.x;
  tmp.y = a.y + b.y;
  return tmp;
}

point pnt_draw ( point a)
{
  writexy(a.y,a.x,"*");
}

