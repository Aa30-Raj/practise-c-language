#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char nm[20];
};
void disp(struct student*);
struct student s,*p;

void main()
{
    p=&s;
printf("Enter the roll no:");
scanf("%d",&p->roll);
printf("Enter the name:");
fflush(stdin);
gets(p->nm);
disp(&s);
getch();
}
void disp(struct student *s1)
{
printf("\nroll=%d\tname=%s",s1->roll,s1->nm);
}
