#include <stdio.h>
#include <string.h>

int main(int argc , char *argv[]){
    char str[31];
    int n;
    sprintf(str,"Hillo worlds");
    printf("%s\n",str);
    n = strlen(str);
    printf("The length of string %d\n",n);
    sprintf(str,"what are you?");
    printf("%s\n",str);
    return 0;
}