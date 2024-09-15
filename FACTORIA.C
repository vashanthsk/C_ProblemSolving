#include<stdio.h>
#include<conio.h>
void main()
{
int fact,i,mult=1;
clrscr();
printf("Enter the factorial:");
scanf("%d",&fact);
for(i=fact;i>=1,i--)
{
mult=mult*i;
}
printf("%d",mult);
getch();
}