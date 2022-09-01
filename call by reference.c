#include<stdio.h>
#include<conio.h>
void oppcase(char*);
void main()
{
    char nm[50];
    printf("Enter the name");
    gets(nm);

    oppcase(nm);
    printf("\n Name in oppcase=%s",nm);
    getch();
}

void oppcase(char*n1)
{
    while(*n1!='\0')
    {
        if(*n1>='a'&& *n1<='z')
        {
            *n1=*n1-32;
        }
        else if(*n1>='A' && *n1<='Z')
        {
            *n1=*n1+32;
        }
        n1++;
    }
    return(0);
}
