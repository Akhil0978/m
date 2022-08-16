#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(j==0||i==j||i==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
