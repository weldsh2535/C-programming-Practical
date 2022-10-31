#include <stdio.h>

int main(){
    char message[12] = "Hillo World";
    printf("Message is %s\n",message);
   
    for (int i = 0; i < 12; i++)
    {
         printf("message Index(%d) is %c\n",i,message[i]);
    }
    
    return 0;
}