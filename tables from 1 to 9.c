#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int i,j;
printf("programe to display tables from 1 to 9");
for(i=1;i<=10;i++)
{printf("\n");
for(j=2;j<=9;j++)
{printf("%d*%d=%d",j,i,i*j);
printf("\t");
}
}
}
