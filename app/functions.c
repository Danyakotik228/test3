#include "functions.h"


void cleararray(int field[20][10])
{
    int i, j;
    for (i = 0; i < 20; i++) {
        for(j = 0; j < 10; j++){
            field[i][j] = 0;
        }
    }
}

int calculate(int sum, int k){
    sum += k;
    return sum;
}

int check(int field[20][10])
{
    int i;
   for (i=0;i<4;i++)
      if (a[i].x<0 || a[i].x>=10 || a[i].y>=20) return 0;
      else if (field[a[i].y][a[i].x]) return 0;

   return 1;
}
