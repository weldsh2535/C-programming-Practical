#include <stdio.h>
int addNumber(int a,int b);
int main(int argc, char *argv[]){
    int res;
    res = addNumber(3,5);
    printf("The sum of the two numbers %d\n",res);

    return 0;
}