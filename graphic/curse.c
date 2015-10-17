#include "curse.h"



void clrscr()
{
   printf("\033[2J");
   fflush(stdout);
}

void writexy(int row,int col, char *s)
{
   printf("\033[%d;%dH%s",row,col,s);
   fflush(stdout);
}

void gotoxy(int row,int col)
{
   printf("\033[%d;%dH",row,col);
   fflush(stdout);
} 


