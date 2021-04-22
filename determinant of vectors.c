#include<stdio.h>
#include<conio.h>
int main ()
{int a,b,c,d,e,f,g,h,i,det;
printf("program to find determinant of a matrix and check whether it is a basis or not\n");
printf("enter the first row ,second row and third row\n");
scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
det=a*(e*i-h*f)-b*(d*i-f*g)+c*(d*h-e*g);
printf("detrminant of given matrix is %d",det);
if(det==0)
    printf("\n it is a basis ");
else
    printf("\n it is  not a basis");
}
