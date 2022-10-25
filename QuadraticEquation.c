#include <math.h>
#include <stdio.h>


int main(){

    double a,b,c,discriminant,root1,root2;
    printf("Enter the cofficents a ,b and c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    //condition for real and different roots
    if(discriminant > 0){
      root1 = (-b + sqrt(discriminant)) / (2*c);
      root2 = (-b - sqrt(discriminant)) / (2*c);
      printf("The roots of the quadration function %lf %lf",root1,root2);
    }
    else if(discriminant == 0){
      root1 , root2 = -b /2*a;
      printf("The roots of the quadration function %lf %lf",root1,root2);
    }
    else {
      root1 = (-b /2*a + sqrt(-(discriminant))) /(2*c);
      root2 = (-b /2*a - sqrt(-(discriminant))) /(2*c);
      printf("The roots of the quadration function %lf %lf",root1,root2);
    }
    return 0;
  
}