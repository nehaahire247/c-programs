#include<stdio.h>
#include<conio.h>
int main ()
{int a[100],i,j,n,prime[100],c,t=0;
printf("to store given elements and display prime numbers among them \n enter how many elements u are going to display::");
scanf("%d",&n);
printf("enter the elements::");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    c=0;
    for(j=2;j<a[i];j++)
    { if(a[i]%j==0)
        { c=1;
          break; }

    }

 if(c==0)
 {
     prime[t]=a[i];
     t++;
 }}
 printf("\n prime numbers from the given numbers are as following\n");
 for(i=0;i<t;i++)
 {
     printf("%d\t",prime[i]);
 }

   return 0;
}
