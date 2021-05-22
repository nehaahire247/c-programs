#include<stdio.h>
#include<conio.h>
int search (int a[],int m,int n);
int main()
{int a[100],i,m,n;
int result;
printf("program to search position of an elemnt \n enter  how many numbers u r going to enter ::");
scanf("%d",&n);
printf("enter the numbers:");
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);
}
printf("enter the number whose position u want to chcek::");
scanf("%d",&m);
result =search(a,m,n);
    if(result==-1)
        printf("element is not present in array");
    else
        printf("element is at index %d ",result);
return 0;
}
int search (int a[],int m,int n)
{int i;
    for(i=0;i<n;i++)
 {if(a[i]==m)
   return i;

 }
   return -1;

}

