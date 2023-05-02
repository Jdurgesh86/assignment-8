#include<stdio.h>
int main()
{
    int i,j;
    for(int i=5;i>0;i--)
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