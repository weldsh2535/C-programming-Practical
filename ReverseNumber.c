#include <stdio.h>

int main(){

    int nums,rev=0,remanider;
    printf("Enter the number:\n");
    scanf("%d",&nums);
    while (nums>0)
    {
        remanider= nums%10;
        rev = rev*10+remanider;
         nums = nums/10;
    }
    printf("The Reverse %d is %d \n",nums,rev);
    return 0;
}