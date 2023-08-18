#include<stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=0; r<n; r++)
    {        printf("\n");

        for(c=0; c<n; c++)
        {
            if(c<r)
            {


                printf("-");

            }

        else
        {
            printf("*");
        }

    }
    }
}








