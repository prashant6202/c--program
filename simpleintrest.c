#include<stdio.h>

int main(){

int principal , rate, month ;


printf("enter the value of principal is : \n");
scanf("%d",&principal);

printf("enter the value of rate is: \n");
scanf("%d",&rate);

printf("enter the value of month is :\n");
scanf("%d",&month);

printf("the value of simpleintrest is %f :",(principal*rate*month)/100);

return 0;
}