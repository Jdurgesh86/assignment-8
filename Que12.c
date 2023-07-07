#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the number of row:");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        char k='A';
        for(int j=0;j<row;j++)
        {
            if(j<i)
                printf(" ");
            else{
                printf("%c",k);
                k++;
            }
        }
        int temp;
        k='A';
        for(int j=0;j<row-1;j++)
        {
            if(j<row-1-i)
            {
                temp=(row-2)-(i+j);
                printf("%c",k+temp);
                
            }
            else
            printf(" "); 
        }
        printf("\n");
    }
}