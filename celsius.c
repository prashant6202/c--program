#include<stdio.h>

void main(){

int celsius;
float far;
printf("enter the vale of celsius:");
scanf("%d",&celsius);
 far = (double)((celsius*9/5)+32);
printf("the value of celsius temprature in fahrenheit is %f",far);

}