#include<stdio.h>

int main(){
int n1,n2;
double res;
char op;
printf("Enter the number :\n");
scanf("%d %d",&n1,&n2);
printf("Enter the operator:\n");
scanf("%c",&op);
switch(op){
case '+':
 res=n1+n2;
 printf("Sum = %lf",res);
 break;
case '-':
 res=n1-n2;
 printf("Substraction = %lf",res);
 break;
 case '*':
 res=n1*n2;
 printf("Multiply = %lf",res);
 break;
 case '/':
 res=n1/n2;
 printf("Division = %lf",res);
 break;
}
return 0;
}
