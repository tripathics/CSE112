#include <stdio.h>

int main()
{
    int w;
    printf("Enter width: ");
    scanf("%i", &w);
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < w-i; j++)
            printf(" ");
        for (int j = 0; j < i+1; j++)
            printf("# ");
        printf("\n");        
    }
    for (int i = 1; i < w; i++)
    {
        for (int j = 0; j < i+1; j++)
            printf(" ");
        for (int j = 0; j < w-i; j++)
            printf("# ");
        printf("\n");
    }
    return 0;
}