#include<stdio.h>
#include<conio.h>
#include<conio.h>
int main()
{
    int hh,ss,mm,i;
    printf("\nenter time in hours::");
    scanf("%d",&hh);
    printf("\nenter time in seconds::");
    scanf("%d",&mm);
    printf("\nenter time in hours::");
    scanf("%d",&ss);
    printf(" you have set the timming = %d:%d:%d",hh,mm,ss);
    while(1)
    {
        ss++;
        if(ss>59)
        { mm++;
          ss=0; }
        if(mm>59)
        {
            hh++;
            mm=0;
        }
        if(hh>12)
        {
            hh=1;
        }
        printf("\n\n\n\t\t\t\t");
        printf("\tclock=%0.2d:%0.2d:%0.2d",hh,mm,ss);
        sleep(1);
        system("cls");


    }
}
