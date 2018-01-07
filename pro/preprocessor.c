#include <stdio.h>

#define LARGEST(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))

void main()

{  

          float x=55.3, y=45.2, z=77.9,big;

          int i=20, j=95, k=10,max;

          clrscr();

          big=LARGEST(x,y,z);

          printf(“\nLargest of %8.2f %8.2f %8.2f is %8.2f”,x,y,z,big);

          max=LARGEST(i,j,k);

          printf(“\nLargest of %8d %8d %8d is %8d”,i,j,k,max);

          getch();

}
