#include<stdio.h>
void main()
{

    int a,b,temp;
   
    printf ("enter the value of two number:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping ::    a=%d \n b=%d",a,b);

}