#include <stdio.h>
#include <math.h>

int AddToNumbers(int a, int b);
float multiplyOfFloatNumbers(int x, int y);
float division(int x, int y);
float substract(int x, int y);

int main()
{
    int add, x, y;
    float mult, div, sub;
    printf("Enter the first numbers:\n");
    scanf("%d", &x);
    printf("Enter the Second numbers:\n");
    scanf("%d", &y);
    add = AddToNumbers(x, y);
    printf("The Sum of %d", add);
    printf("\n");
    mult = multiplyOfFloatNumbers(x, y);
    printf("The Multiply of %f", mult);
    printf("\n");
    div = division(x, y);
    printf("The Division of %f", div);
    printf("\n");
    sub = substract(x, y);
    printf("The Substact of %f", sub);
    printf("\n");
    /*
    printf("Enter the numbers ?\n");
    scanf("%d",&nums);
    for(int i=0;i<nums;i++){
        printf("%d",i);
    }*/
    return 0;
}
float multiplyOfFloatNumbers(int x, int y)
{
    return x * y;
}
int AddToNumbers(int x, int y)
{
    return x + y;
}
float division(int x, int y)
{
    return x / y;
}
float substract(int x, int y)
{
    return x - y;
}
