#include<stdio.h>

int main()
{
    double i, n, factorial=1 ;;
    

    printf("enter your number :");
    scanf("%lf", &n);

    if (n < 0)
    {
        printf("not defined");
    }
    else
    {
        for( i=1 ; i<=n ; i++)
         {
        factorial = i * factorial ;
         }
    
        printf("%0.1lf", factorial);
    }


    return 0 ;
}