#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ int n;
printf("menu driven program");
printf("enter 1 for length \n enter 2 for copy \n enter 3 for concatenation \n enter 4 for compare\n");
printf("enter anyone input from above::");
scanf("%d",&n);
switch(n)
{
    case 1: call_length();
    break;
    case 2: call_copy();
    break;
    case 3: call_concatenation();
    break;
    case 4: call_compare();
    break;

}}
void call_length()
{char a[10];
printf("enter the string ::");
scanf("%s",&a);
printf("length of %s is %d ",a,strlen(a));
getch();
return 0;
}
void call_copy()
{
    char a[10],b[10];
    printf("enter the string ::");
    scanf("%s",&a);
    strcpy(b,a);
    printf("after coping the string is %s",b);
}
void call_compare()
{   char a[10],b[10];
    printf("enter the first string ::");
    scanf("%s",&a);
    printf("enter the second string ::");
    scanf("%s",&b);
    if(strcmp(a,b)==0)
        printf("given two srings are same");
    else
        printf("given two strings are not same");



}
void call_concatenation()
{
    char a[10],b[10];
    printf("enter the first string ::");
    scanf("%s",&a);
    printf("enter the second string ::");
    scanf("%s",&b);
    strcat(a,b);
    printf("string after concatenation is= %s",a);
    return 0;
}


