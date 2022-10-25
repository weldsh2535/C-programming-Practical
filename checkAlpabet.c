#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("The character is Alpabets\n");
    } 
    else{
        printf("Is not Alpabets\\n");
    }
}