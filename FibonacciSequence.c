#include <stdio.h>

int main(){
    int n,nextTerm;
    int t1=0,t2=1;
    nextTerm = t1+t2;
    printf("Enter the numbers  of terms:\n");
    scanf("%d",&n);

   // printf("datatype of n %d",sizeof(n));
    printf("Fibonacci Series:%d,%d,",t1,t2);
    for(int i=3;i<=n;i++){
       printf("%d,",nextTerm);
       t1=t2;
       t2= nextTerm;
       nextTerm = t1+t2;
    }
    printf("\n\n");
    return 0;
}