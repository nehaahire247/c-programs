#include<stdio.h>
#include<conio.h>

struct emp
{
    char name[10];
     int id ;
     int salary;


};
int main()
{int i,j,n,h;
printf("menu driven programe ");
printf("how many employee record u want to insert ::");
scanf("%d",&n);
struct emp e [n];
for (i=0;i<n;i++)
{
    printf("\n enter emplyoee name::");
    scanf("%s",&e[i].name);
    printf("\n enter emplyoee id::");
    scanf("%d",&e[i].id);
    printf("\n enter emplyoee salary::");
    scanf("%d",&e[i].salary);
    printf("................................................");
}
printf("\n enter 1 for search by name::");
printf("\n enter 2 for search by id::");
printf("\n enter 3 for display all::");
printf("\n enter 4 for salary >200000::");
printf("\n enter 5 to display maximum salary::");
scanf("%d",&h);
switch(h)
{
case 1:
    search_name(n,e);
case 2:
    search_id(n,e);
case 3:
    display_all (n,e);
case 4:
     salary(n,e);
case 5:
    max_salary(n,e);
}}
void search_name(int n,struct emp a[])
{
    int i;
    char name;
    printf("enter which name u want to search::");
    scanf("%s",&name);
    for(i=0;i<n;i++)
    {
        if(name=a[i].name)
        printf("\n employee name = %s ,\n salary=%d,\n employee id =%d",a[i].name,a[i].salary,a[i].id);

    }
}
void search_id(int n,struct emp a[])
{
    int i,idd;
    printf("enter which id u want to search::");
    scanf("%d",&idd);
    for(i=0;i<n;i++)
    {
        if(idd=a[i].id)
        printf("\n employee name = %s ,\n salary=%d,\n employee id =%d",a[i].name,a[i].salary,a[i].id);

    }
}
void display_all(int n,struct emp a[])
{
    int i,idd;
    printf("data of all emplyoee is as following::");
    for(i=0;i<n;i++)
    {
        printf("\n employee name = %s ,\n salary=%d,\n employee id =%d",a[i].name,a[i].salary,a[i].id);

    }
}
void salary (int n, struct emp a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i].salary>=200000)
        {

         printf("\n emplyoee name=%s,\n emplyoee salary=%d",a[i].name,a[i].salary); }
    }
}
void max_salary(int n,struct emp a[])
{
    int i,j,k=0;
    for(i=0;i<n;i++)
    {   if(a[i].salary>k)
         {
             k=a[i].salary;
         }                   }

    for(i=0;i<n;i++)
    {
        if(a[i].salary=k)
        {
            printf("maximum salary is %d",a[i].salary);
            break;
        }
    }



}













