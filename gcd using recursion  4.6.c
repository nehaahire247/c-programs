#include<stdio.h>
#include<conio.h>
int call(int a,int b);
int main ()
{int a,b,gcd;
printf("programe to display gcd of two numbers \n enter the two numbers::");
scanf("%d%d",&a,&b);
gcd=call (a,b);
printf("gcd of %d and %d is %d ",a,b,gcd);
getch();
return 0;


}
int call (a,b)
{
    int gcd;
if(b==0)
 return a;
else
    if(a==0)
 return b;
else
gcd=call(b,a%b);


}
