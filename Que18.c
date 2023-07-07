#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(4-i-j>0)
                printf(" ");
            else if(9-5+i+1<=j)
                    printf(" ");
                else
                    printf("*");
        }
        printf("\n");
    }
    for(int i=4;i>0;i--)
    {
        for(int j=9;j>0;j--)
        {
            if(6-i-j>0)
                printf(" ");
            else if(9-5+i+1<=j)
                    printf(" ");
                else
                    printf("*");
        }
        printf("\n");
    }
    
}