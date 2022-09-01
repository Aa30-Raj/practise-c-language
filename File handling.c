#include<stdio.h>
#include<conio.h>
void main()
{
file *f;
f=fopen("A1.txt","w");
fprintf(f,"welcome");
fclose(f);
printf("\n Record stored in A1.txt");
getch();
}
