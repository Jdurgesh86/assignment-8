
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char k='A';
        for(int j=0;j<n;j++)
        {
            if(j<n-1-i)
                printf(" ");
            else
                {
                    printf("%c",k);
                    k++;
                }
        }
        if(i>=1)
        {
            char k='A';
            k+=i-1;
            for(int j=0;j<n-1;j++)
            {
                if(j<i)
                {
                    printf("%c",k);
                    k--;
                }
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
