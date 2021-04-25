#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{ char c;
scanf("%c",&c);
  if(isalpha(c)==2)    // if given value is a lowercase character then it gives 0 as output //
printf("uppercase of %c = %c ",c,toupper(c));
   if(isalpha(c)==1)
    { printf("lowercase of %c = %c" , c,tolower(c)); //if given value is uppercase character it gives output 1//
     }
   if(isalpha(c)==0)
   printf("%c is punctuation or digit",isalpha(c));// if we have enter any symbol or digit then it gives 0 as output //
}
