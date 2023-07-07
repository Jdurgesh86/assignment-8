#include<stdio.h>
int main()
{
    int i,j,temp;
    for(int i=1;i<=4;i++)
    {
        int k=1,check=0;
        for(int j=1;j<=7;j++)
        {
            if(j<i)
                {
                    printf(" ");
                }
            else if(7-i+1<j)
                    printf(" ");
            else
                {
                    printf("%d",k);
                    if(k>=5-i)
                            check=1;
                    if(j<=6-i && check!=1)
                        k++;
                    else
                        k--;
                }
        }
        printf("\n");
    }
}