#include<stdio.h>
int i, fac = 1 , n ;
void printfactorial(int n)
{
   

    for( i=1 ; i<=n ; i++  )
    {
        fac = i*fac ;
    }

    printf("%d", fac );
}
int main()
{
    printf("enter youe number :");
    scanf("%d", &n );
    printfactorial(n);
}