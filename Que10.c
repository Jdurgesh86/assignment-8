#include<stdio.h>
int main()
{
   int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            printf("%d",j);
        }
        for(int k=0;k<(2*i-1);k++){
            printf(" ");
        }
        if(i==0){
            for(int l=n-1;l>=1;l--){
                printf("%d",l);
            }
        }
        else{
            for(int l=i;l<n;l++){
                printf("%d",n-l);
            }
        }
        printf("\n");
    }
}
