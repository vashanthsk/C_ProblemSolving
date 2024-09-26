#include<stdio.h>
void main()
{
    int score[40][5];
    int n,i,j,total,avg;
    printf("Enter the no of students :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          total=0;
          printf("             Students %d\n",i+1);
        for(j=0;j<5;j++)
        {
            printf("Mark %d :",j+1);
            scanf("%d",&score[i][j]);
            total= total+score[i][j];
            avg=total/5;
        }
        printf("Total =%d/500\n",total);
        printf("Average=%d%\n",avg);
    }
}