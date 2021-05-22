#include<stdio.h>
#include<conio.h>
int main()
{ int i,j,n,m,a1[20],a2[20],a3[40],l;
printf("programe to display intersection of two array ::\n");
printf("\n enter how many elements u want to enter in first array::");
scanf("%d",&m);
printf("enter the elements of first array::");
for(i=0;i<m;i++)
{
    scanf("%d",&a1[i]);
}
printf("enter how many elements u r going to enter::");
scanf("%d",&n);
printf("enter the elements of second array::");
for(j=0;j<n;j++)
{
    scanf("%d",&a2[j]);
}
int k=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a1[i]==a2[j])
        {
            a3[k]=a1[i];
            k++;


        }

    }
}
l=k;
printf("intersection of two array are as following:");
for(k=0;k<l;k++)
{
    printf("%d\t",a3[k]);
}
}
