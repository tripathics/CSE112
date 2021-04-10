#include<stdio.h>
#include<math.h>
int main()
{
       int i;
       float y, final, z, x, add=0;
       printf("Enter the value of x: ")       ;
       scanf("%f", &x);
       z = (x-1)/x;
       for(i=2; i<=7; i++)
       {
              y = (1*pow((x-1)/x , i))/2;
              add = add + y;
       }
       final = z + add;
       printf("Total sum = %f\n", final);
}
