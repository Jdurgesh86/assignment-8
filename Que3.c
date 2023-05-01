#include<stdio.h>
int main()
{
    int i,j;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(5-i-j>0)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
    }
}