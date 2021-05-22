#include<stdio.h>
#include<conio.h>
void call (int a[],int n);
int main()
{int i,n;
int a[100];
printf("program to print reverse elements \n enter how many elements ur going to enter::");
scanf("%d",&n);
for(i=0;i<n;i++)
{
        scanf("%d",&a[i]);
}
  call (a,n);
  return 0;
}
  void call (int a[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",*(a+i));
    }
}
