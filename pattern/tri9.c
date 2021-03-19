#include <stdio.h>

int main(void)
{
    int height;
    printf("Enter height: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}