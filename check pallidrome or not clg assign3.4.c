// programe to check given no is a pallidrome or not //
#include<stdio.h>
#include<conio.h>

main()
{
int sum=0 ,r ,n;
printf("programe to check given number is pallidrome or not \n enter the number");
scanf("%d",&n);
while(n>0)
{
    r=n%10;
    sum=sum*10+r;
    n/=10;
}
  if(sum==n)
 printf("%d  is pallidrome",n);
 else
    printf("%d not a pallaidrome",n);
}
