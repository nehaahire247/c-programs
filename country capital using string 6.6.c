#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char cname[20];
char a[5][10]={"india","bhutan","france","nepal","japan"};
char b[5][10]={"delhi","thimphu","paris","kathmandu","tokyo"};
printf("programe to display capital name \n enter the country name::");
scanf("%s",&cname);
for(int i=0;i<5;i++)
{if(strcmp(cname,a[i])==0)
printf(" capital name is %s",b[i]);
}
getch();
return 0;
}
