#include<stdio.h>
#include<conio.h>
int iseven(int a);
main()
{int a,b,s,i;
printf("to check even number that user wants \n enter how many even numbers you want to check::");
scanf("%d",&b);
for(i=1;i<=b;i++)
{printf(" \n enter the number :: ");
scanf("%d",&a);
s= iseven (a);
if (s==1)
printf("it is an even number \n");
else
    printf("it is odd number \n");
}


}
int iseven (int a)
 { if (a%2==0)
   return 1;
  else
    return 0;
 }
