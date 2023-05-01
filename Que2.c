#include<stdio.h>
int main()
{
    int i,j;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(4-j-i>0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}