#include<stdio.h>
int i, fac = 1 , n ;
void printfactorial()
{
    printf("enter youe number :");
    scanf("%d", &n );

    for( i=1 ; i<=n ; i++  )
    {
        fac = i*fac ;
    }

    printf("%d", fac );
}
int main()
{
    printfactorial();
}