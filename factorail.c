#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the n! \n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("The factorails of %d", fact);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("The factorails of  %d \n\n", fact);
    }
    return 0;
}