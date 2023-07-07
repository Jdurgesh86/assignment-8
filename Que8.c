#include<stdio.h>
int main()
{
    int i,j,temp;
    for(int i=1;i<=4;i++)
    {
        int k=1;
        for(int j=1;j<=7;j++)
        {
            if(j<=4-i||j>=4+i)
                {
                    printf(" ");
                }
            else
                {
                    if(k<=i)
                    {
                        printf("%d",k);
                        k++;
                        temp=k-1;
                    }
                    else{
                    temp--;
                    printf("%d",temp);
                    }
                }
        }
        printf("\n");
    }
}