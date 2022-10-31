#include <stdio.h>
#include <string.h>

int main(){

    int a[5] = {3,5,1,8,9};
    //printf("Array of %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]); 
    for (int i = 0; i < 5; i++)
    {
        printf("Array of %d is %d \n",i , a[i]);
    }
    int b[] = {3,2,1,4,5,6,2,1,4};
    /*for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            if(b[i]=b[j]){

            }
        }
        
    }
    */
    return 0;
}