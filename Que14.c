
#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the row number :");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==row-1&&j<row)
                printf("*");
            else if(i==j||j==0)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}
