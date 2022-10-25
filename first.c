// Online C compiler to run C program online
#include <stdio.h>
void swap(){
     int n1,n2,temp;
    printf("The first Number \n");
     scanf("%d",&n1);
    printf("The second number \n");
    scanf("%d",&n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("n1 = %d",n1);
    printf("n2 = %d",n2);
}
void checkEven(){
    int m;
    printf("Please enter the number?\n");
    scanf("%d",&m);
    for(int i=0;i<=m;i++){
        if(i%2==0){
            printf("%d",i);
        }
    }
}
void forloop(){
    int n;
    printf("Please enter the number? \n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d",i);
    }
    printf("\n");
}
void ASCI_Value(){
  char c;
    printf("Please enter the characters:\n");
    scanf("%c",&c);
    printf("Char of %c = %d",c,c);
    printf("\n");
}
void checkVowelCharacters(){
    char c;
    int flag = 0;
    printf("Please enter the characters :");
    scanf("%c",&c);
    char smallChar[] ={'a','e','i','u','o'};
    char capitalChar[] = {'A','E','I','U','O'};
   for(int i=0 ;i<=4;i++){
     if(c == smallChar[i] || c == capitalChar[i]){
       flag++;
    }
   }
   if(flag>0){
    printf("The Character is vouwel \n");
   }
   else{
    printf("The Character is consonant \n");
   }
}
void find_Largest_Numbers(){
    int n1,n2,n3;
    printf("Please enter the Numbers :");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
       printf("The largest number is %d",n1);
    }
    else{
        if(n2>n3){
             printf("The largest number is %d",n2);
        }
        else{
             printf("The largest number is %d",n3);
        }
    }
}
int main() {
  // Write C code here
  // swap();
  // forloop();
   //checkEven();
   //ASCI_Value();
   //checkVowelCharacters();
   find_Largest_Numbers();
    return 0;
}