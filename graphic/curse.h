#ifndef CURSE_H
#define CURSE_H
#include <stdio.h>

#define MAXROW 24
#define  MAXCOL 80

void clrscr();
void writexy(int row,int col, char *s);
void gotoxy(int row,int col);

#endif
