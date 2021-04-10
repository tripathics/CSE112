#include<stdio.h>
#include<math.h>
int main()
{
       int i;
       float x, y, z, add = 0;
       printf("Enter the value of x: ");
       scanf("%f", &x);
       z = (x-1)/x;
       for(i=1; i < 8; i++)
       {
              y = (pow(z, i)) / (float)i;
              add = add + y;
       }
       printf("Total sum = %f\n", add);
}
