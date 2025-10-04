#include<stdio.h>

int main()
{
    int i, j, n ;

    printf("enter your number :");
    scanf("%d", &n);

    for( i = 1 ; i <= n ; i++ )
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", j );//i just put j and see outpus
        }
        
        printf("\n");



    }



    return 0 ;
}