#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,x;    
printf("enter the number :");    
scanf("%d",&n);    
x=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(x==sum)    
printf("It is a armstrong  number ");    
else    
printf("It is not a armstrong number");    
return 0;  
}  
