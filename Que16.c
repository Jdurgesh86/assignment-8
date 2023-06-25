
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
            if(j==row-1-i)
                printf("*");
                else if(i==(row-1)&&j<row)
                        printf("*");
                    else
                        printf(" ");
        }
        for(int j=1;j<row;j++)
        {
            if(i==j)
                printf("*");
                else if(i==(row-1)&&j<row)
                        printf("*");
                    else
                        printf(" ");
        }

        printf("\n");
    }
}
