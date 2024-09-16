#include<stdio.h>
#include<conio.h>
void main()
{
int row,count,n;
clrscr();
printf("Enter the number of rows:");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
   for(count=1;count<=n-row;count++)
   {
     printf(" ");
   }
      for(count=1;count<=row;count++)
      {
	 printf("%d ",row);
      }
    printf("\n");
}
getch();
}