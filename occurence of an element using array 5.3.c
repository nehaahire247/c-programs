#include<stdio.h>
#include<conio.h>
int main ()
{int a[100],i,n,m;
printf("programe to display occurence of an given element \n enter how many elements ur going to enter::");
scanf("%d",&n);
printf("enter the elements::");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter the element whose occurence u want to check::");
scanf("%d",&m);
int k=0;
for(i=0;i<n;i++)
{ if(a[i]==m)
   k++;
}
printf("the occurence of %d is %d",m,k);
return 0;
}
