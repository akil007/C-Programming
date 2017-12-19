#include <stdio.h>

int max(int num1, int num2);

int main () {

   int n;
   scanf("%d",&n);
  

   max(n);

   

   return 0;

}

int max(int n) {

   int a[n];
   int temp=0;
   for(int i=0;i<n;i++)
   {
   		scanf("%d",a[i]);
        if(a[i]>=temp)
        {
        	temp=a[i];
        }
   }
   printf( "Max value is : %d", temp);

}
