#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{int n,i,t1=0,t2=1,nextterm;
printf("program to display febonacii sequence");
scanf("%d",&n);
for (i=1;i<=n;++i)
{ printf("%d\t",t1);
nextterm=t1+t2;
 t1=t2;
 t2= nextterm ;
 }
return 0;
}
