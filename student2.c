#include<stdio.h>
#include<conio.h>
//#include<string.h>
struct student
{
    int roll;
    char name[15];
};
void main()
{
    struct student s[3];
    int i;
    for(i=0;i<3;i++)
        {
    printf ("\nEnter the roll_no:");
    scanf("%d",&s[i].roll);
    printf("Enter the name:");
    scanf("%s",&s[i].name);

    /*printf ("Enter 2nd roll_no:");
    scanf("%d",&s.roll);
    printf("Enter 2nd name:");
    scanf("%s",&s2.name);*/

    printf("\n\t roll number=%d\t name=%s",s[i].roll,s[i].name);
        }
    //printf("\n\t2nd roll number=%d\t 2nd name=%s",s2.roll,s2.name);
getch();
}
