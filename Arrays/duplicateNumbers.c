#include <stdio.h>

int main(){
    int i,j,k,z,numbers,b[100];
    //To remove the duplication of numbers
    printf("Enter the Total number of array list:\n");
    scanf("%d",&numbers);
    printf("Enter the duplicate number of array list:\n");
   
     for ( i = 0; i < numbers; i++)
     {
       scanf("%d",&b[i]);
     }
     //
     printf("Before the duplicate array list:\n");
       for (z = 0; z < numbers; z++)
    {
        printf("%d ",b[z]);
    }
    printf("\n");
     printf("After the duplicate remove:\n");
    //
    for ( i = 0; i < numbers; i++)
    {
        for ( j = i+1; j < numbers; j++)
        {
            if(b[i] == b[j]){
              for( k=j;k < numbers;k++){
                b[k] = b[k+1];
              }
              numbers--;
            }
        }
    }
    for (z = 0; z < numbers; z++)
    {
        printf("%d ",b[z]);
    }
     printf("\n");
    return 0;
}