#include "polygon.h"

void poly_draw( polygon p)
{
  int i;

  for(i =0; i < p.dim; i++) 
     pnt_draw(p.coordinates[i]);
}

