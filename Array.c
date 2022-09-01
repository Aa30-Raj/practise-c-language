#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char nm[40]; //nm1[20];
printf("Enter the first Name");
gets(nm);
//printf("Enter the Last Name");
//gets(nm1);
//strcat(nm,nm1);
printf("nm=%S",nm);
printf("\n length of the string=%d",strlen(nm));
printf("\n Name in capital=%S",strupr(nm));
printf("\n Name in small=%S",strlwr(nm));
printf("\n Reverse Name=%S",strrev(nm));
getch();
}
