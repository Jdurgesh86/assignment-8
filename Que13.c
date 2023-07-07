#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the row number ");
    scanf("%d",&row);
    for(int i=0;i<(row*2)-1;i++)
    {
        char k='A';
        for(int j=0;j<row;j++)
        {
            if(j<(row-i))
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        k='A';
        int temp=0;
        if(i>=1)
            temp=i-1;
        k+=(row-temp-2);
        for(int j=0;j<row-1;j++)
        {
            if(j<temp)
                printf(" ");
            else
                {
                printf("%c",k);
                k--;
            }
        }
        printf("\n");
    }
}