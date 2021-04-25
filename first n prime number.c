#include<stdio.h>
#include<conio.h>
int main()
{int i,j,x=0,n,k=0;
printf("program for first n prime no");
scanf("%d",&n);
for (i=2;x<n;i++)
{
   k=0;
for(j=1;j<=i;j++)
{

    if(i%j==0)
    k++;
}
    if(k==2)
    {printf(" \n %d",i);
    x++;}

}

}
