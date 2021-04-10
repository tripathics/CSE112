#include<stdio.h>
#include<math.h>
int main()
{
       int i, pres, count;
       float x, y, z, add = 0;
       printf("Enter the value of x: ");
       scanf("%f", &x);
       printf("How much precise do you want the result to be?\n(1 to 10)");
       scanf("%d", &pres);
       count = pres * 5;
       z = (x-1)/x;
       for(i=1; i < count; i++)
       {
              y = (pow(z, i)) / (float)i;
              add = add + y;
       }
       printf("Total sum = %f\n", add);
}
