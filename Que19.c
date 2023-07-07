#include<stdio.h>
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<21;j++)
        {
            if((j>=(2-i)&&j<=6+i)||(j>=(14-i)&&j<=18+i))
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }


    for(int i=0;i<11;i++)
    {
        for(int j=0;j<21;j++)
        {
            if(j>=i&&j<21-i)
                {if(j>=6&&i==0&&j<=13)
                {
                    if(j==6)
                    printf(" Mysirg ");
                    continue;
                }
                printf("*");}
            else
                printf(" ");
        }
        printf("\n");
    }
}