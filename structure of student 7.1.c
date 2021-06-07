#include<stdio.h>
#include<conio.h>
void call_search();
void call_display_student_details();
void call_maxp();
void call_grt60();
struct student
{
    char name[10];
     int roll_no;
     int marks1,marks2,marks3;
     float percentage;

};
int main()
{
    int n,i,h,r,p;
    printf("how many students record u want to add::");
    scanf("%d",&n);
    struct student s1[n];
    for(i=0;i<n;i++)
    {
        printf("\n enter the name of student::");
        scanf("%s",&s1[i].name);
        printf("\n enter roll number::");
        scanf("%d",&s1[i].roll_no);
        printf("\n enter marks of three subjects:: ");
        scanf("%d%d%d",&s1[i].marks1,&s1[i].marks2,&s1[i].marks3);
        s1[i].percentage=(float)(s1[i].marks1+s1[i].marks2+s1[i].marks3)*(1.0/3.0);
        printf("\n*-----------------------------------------------------------------*");

    }
    printf("\n enter 1 for serach ");
    printf("\n enter 2 for modify");
    printf("\n enter 3 for display all student details");
    printf("\n enter 4 for display student having maximum %");
    printf("\n enter 5 for greater than 60% \n =");
    scanf("%d",&h);
    switch(h)
    {
          case 1 :

            call_search(n,s1);
            break;
         case 2 :
            call_modify(s1,n);

         break;
         case 3:
            call_display_student_details(s1,n);
            break;
         case 4:
            call_maxp(s1,n);
            break;
        case 5:
            call_grt60(s1,n);
            break;


    }
}

void call_display_student_details(struct student s1[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n roll_no =%d ,\n name=%s,\n percentage=%f",s1[i].roll_no,s1[i].name,s1[i].percentage);
    }
}
void call_search(int n,struct student s1[])
{int i=0,r;
char name;
printf("enter by which roll no u want to search::");
scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(r==s1[i].roll_no)
        printf("\n roll_no=%d,\n name=%s,\n percentage=%f",s1[i].roll_no,s1[i].name,s1[i].percentage);
        printf("\n*----------------------------------------------------------*");}

    return 0;
}
void call_maxp(struct student a[],int n)
{
       int i,j,k=0;
    for(i=0;i<n;i++)
    {   if(a[i].percentage>k)
         {
             k=a[i].percentage;
         }                   }

    for(i=0;i<n;i++)
    {
        if(a[i].percentage=k)
        {
            printf("maximum perecentage is %f",a[i].percentage);
            break;
        }
    }
}
void call_modify(struct student s1[],int n)
{
    int i=0,r,h;
    printf("enter which roll no u want to modify::");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(r==s1[i].roll_no)
        {
            printf("enter the modified roll_no::");
            scanf("%d",&h);
            s1[i].roll_no=h;
            printf(" your modified roll no=%d,its name is %s",s1[i].roll_no,s1[i].name);

        }
    }
}
void call_grt60(struct student s1[],int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(s1[i].percentage>=60)
        {
            printf("\n student name=%s,\n percentage=%f",s1[i].name,s1[i].percentage);
        }
    }
}

