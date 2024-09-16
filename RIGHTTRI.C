#include<stdio.h>
#include<conio.h>
void main()
{
int out,in,n;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
for(out=1;out<=n;out++)
{
for(in=1;in<=out;in++)
{
printf("*");
}
printf("\n");
}
printf("Successful");
getch();
}
