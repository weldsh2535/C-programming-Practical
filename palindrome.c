#include <stdio.h>

int main(){
    int n,rev=0,rem,original;
    printf("Enter the palindrome number:\n");
    scanf("%d",&n);
    original = n;
    while (n>0)
    {
        rem = n%10;
        rev=rev*10+rem;
        n = n/10;
    }
    if(original==rev){
        printf("The number is palindrome\n\n");
    }
    else{
        printf("Not palindrome\n\n");
    }
}