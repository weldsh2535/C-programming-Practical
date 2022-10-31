#include <stdio.h>
#include <string.h>
//To remove duplicate character at the give strings
int main(){

    int i,j,k;
    char str[100];
    strcpy(str,"Hillo worlds");
    for(i=0; i <= strlen(str); i++){
        for (j = i+1; j <= strlen(str); j++)
        {
            if(str[i] == str[j]){
                for(k=j;k<= str[k]!='\0';k++){
                    str[k] = str[k+1];
                }
            }
        }
        
    }
    printf("The duplicate string is %s \n",str);
}