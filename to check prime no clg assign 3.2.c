#include<stdio.h>
#include<conio.h>
int main ()
{
int i,n, k=0;
printf("programe to check prime number \n  enter the number ::");
scanf("%d",&n);
for(i=1;i<=n;i++)
{   if(n%i==0)
     k++ ;  }
     if (k==2)
        printf("it is a prime no");
     else
        printf("it is not a prime no");
}


