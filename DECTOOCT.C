#include<stdio.h>
#include<conio.h>
void main()
{
int number,rem,i=1,sum=0;
clrscr();
printf("Enter a decimal number:");
scanf("%d",&number);
while(number!=0)
{
rem=number%8;
number=number/8;
sum=sum+rem*i;
i=i*10;
}
printf("%d",sum);
getch();
}