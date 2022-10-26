#include <stdio.h>

int main()
{
    int i, space, rows, k = 0;
    // half pramid of triangles
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
    // Triangle of Alpabets
    for (int i = 'A'; i <= 'E'; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    printf("\n\n");
    //
    for (int i = 5; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    for (int i = 6; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    //
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("%d ",k);
            ++k;
        }
        printf("\n");
    }
    return 0;
}