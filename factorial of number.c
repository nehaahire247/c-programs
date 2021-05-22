#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{int i,n,product=1;
printf("programe to display factorial of no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{product=product*i;
}
printf("factorial of %d =%d",n,product);
}
