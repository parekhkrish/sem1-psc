#include<stdio.h>
/*using if else to find that number is even or odd*/
int main()
{
     printf("\tthis is program to find that number is even or odd\n");
    int num ;
    printf("\tenter a number:");
    scanf("%d", num );

    if( num%2 == 0 )
    {
        printf("\tthe number you enterd is even\n");    
    }
    else
    {
        printf("\tthe number you enterd is odd\n");
    }

    return 0 ;

}