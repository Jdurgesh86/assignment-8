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
            if(i==0&&j<row||(i==j))
                printf("*");
            else   
            printf(" ");
        }

        for(int j=1;j<row;j++)
        {
        if(((row-1-i)==j)||(i==0&&j<row))
            printf("*");
            else   
            printf(" ");
        }
        printf("\n");
    }
        
}