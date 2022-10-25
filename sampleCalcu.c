#include <stdio.h>

int main()
{
    char op;
    int n1, n2;
    printf("Enter the operator(+,-,*,/)\n");
    scanf("%c", &op);
    printf("Enter the n1:\n");
    scanf("%d", &n1);
    printf("Enter the n2:\n");
    scanf("%d", &n2);
    switch (op)
    {
    case '+':
        printf("The Sum of %d", n1 + n2);
        break;
    case '-':
        printf("The Substract %d", n1 - n2);
        break;
    case '*':
        printf("The Multiply %d", n1 * n2);
        break;
    case '/':
        printf("The Division %d", n1 / n2);
        break;
        return 0;
    }
    return 0;
}