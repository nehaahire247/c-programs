#include<stdio.h>
#include<conio.h>
int fib (int i);
int main()
{int i,n;
printf("programe to display nth fibonacii series \n enter the number upto which u want fibonacii series::");
scanf("%d",&n);
for(i=1;i<=n;i++)
{printf("%d \t ",fib(i));
}}
int fib(int i)
{if (i==1 ||i==2)
return 1;
else
return ( fib(i-2)+fib(i-1));
}

