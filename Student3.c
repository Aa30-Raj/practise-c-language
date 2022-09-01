#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char nm[20];
};

void main()
{
struct student s,*p;
p=&s;
printf("Enter the roll no:");
scanf("%d",&p->roll);
printf("Enter the name:");
fflush(stdin);
gets(p->nm);
printf("\nName=%s\tRoll=%d",p->nm,p->roll);
getch();
}
