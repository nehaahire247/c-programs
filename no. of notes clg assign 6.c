#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int a,b,c,x,y,z;
printf("programe to print no of notes");
printf("\n enter the amount");
scanf("%d",&x);
a=x/10;// to  calculate notes of 10 rupees//
printf("\n number of notes of 10 rupees is %d",a);
y=x%10; // to calculate amount left which is less than 10//
b=y/5; // to calculate no of notes of 5 rupees//
printf("\n  no of nots of 5 rupees is %d",b);
z=y%5; // to calculate amount left which is less than 5 rupees//
c=z;
printf("\n no of notes of rupees 1=%d",c);
printf("\n total no of notes is %d",a+b+c);
}
