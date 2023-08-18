#include<stdio.h>
int main()
{
    int i,j,n,number=1,a=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        a=number;
        for(j=0; j<=i; j++)
        {
            printf("%d ",a);

            a=a/2;

        }
        printf("\n");
        number=number*2;

    }





}
