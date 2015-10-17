#include "polygon.h"

int main() {

   polygon p = {4, { {1,1}, {1,5}, {4,5}, {4,1} } };

   clrscr();
   poly_draw(p);
   gotoxy(MAXROW,MAXCOL);
   return 0;
}
