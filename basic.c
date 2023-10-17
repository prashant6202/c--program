#include<stdio.h>

int main(){
 float num1 , num2, num3, num4;
 printf("enter the first number : \n");
 scanf("%f",&num1);

printf("enter the second number : \n");
scanf("%f",&num2);

printf("enter the third number : \n");
scanf("%f",&num3);

printf("enter the fourth number : \n");
scanf("%f",&num4);

float a = num1+num2-num3*num4;

printf("num1+num2-num3*num4 is : %f \n ",a);

float b = num1*num2/num3*num4;

printf("num1*num2/num3*num4 is : %f \n",b);

printf("num1*(num2/num3)*num4 is : %f \n",num1*(num2/num3)*num4);

printf("num1*num2-num3/num4 is : %f \n",num1*num2-num3/num4);

return 0;
}