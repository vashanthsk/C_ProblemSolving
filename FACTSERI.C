#include<stdio.h>
#include<conio.h>
void main()
{
int n,j;
float sum=0,div,i,fact;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   fact=1;
   for(j=1;j<=i;j++)
   {
   fact=fact*i;
   }
   div=i/fact;
   sum=sum+div;
}
printf("%f",sum);
getch();
}