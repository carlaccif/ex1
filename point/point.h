#ifndef POINT_H
#define POINT_H

#include <stdio.h>

typedef struct point {
 	int x;
	int y;
} point;

point pnt_init(int x, int y);
point pnt_draw ( point a);
point pnt_add ( point a, point b);

#endif
