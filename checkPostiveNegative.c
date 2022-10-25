#include <stdio.h>

int main(){

    double numbers;
    printf("Enter the numbers:\n");
    scanf("%lf",&numbers);
    if(numbers > 0){
        printf("The numbers is positive");
    }
    else{
        printf("The number is negative");
    }
    return 0;
}