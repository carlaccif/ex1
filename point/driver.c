#include "point.h"

int main() {
    point a={2,3};
    point b ={ 6,7};
    point c= pnt_add(a,b);
    clrscr();
    pnt_draw(a);
    pnt_draw(b);
    pnt_draw(c);
 
    return 0;
} 
