#include<stdio.h>
#include<conio.h>
int main ()
{int i,j,n,k;
printf("programe to display  prime no  upto n \n enter the desire no. upto which u want prime no::");
scanf("%d",&n);
 for (j=2;j<=n;j++)
{    k=0;
    for (i=1;i<=j;i++)
     {

      if (j%i==0)
     {k++; }
    }
    if(k==2)
       printf(" \n %d ",j);

}
}



