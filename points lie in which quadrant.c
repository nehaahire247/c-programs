#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b;
printf("\n check points in which quadrant the points lie :");
scanf("%d%d",&a,&b);
if(a>0&&b>0)
{printf("points lie in first quadrant");}
else if (a<0&&b>0)
{printf("points lie in second quadrant");}
else if(a<0&&b<0)
{printf("points lie in third quadrant");
}
else if(a>0&&b<0)
{printf("points lie in fourth quadrant");}
else if("a==0&&b==0")
{printf("points lie at center");}
}
