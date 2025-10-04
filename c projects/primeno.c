#include<stdio.h>
/*using if else to find that number is even or odd*/
int main()
{
     printf("\tthis is program to find that num is prime or not\n");
    int num ;
    printf("\tenter a number:");
    scanf("%d", num );

    if( num%2 == 0 )
    {
        printf("\tthe number you enterd is not prime\n");    
    }
    else
    {
        printf("\tthe number you enterd is prime\n");
    }

    return 0 ;

}