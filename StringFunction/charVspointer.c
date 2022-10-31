#include <stdio.h>

int main(){
    char str[24]="Welcome to C programming";
    char *ptr ="Hillo world";

    printf("str = %s\n",str);
    printf("ptr = %s\n",ptr); 
    
   // str = str+1;
    printf("str = %s\n",str);
    ptr = ptr+1;
    printf("ptr = %s\n",ptr); 
    return 0;
}