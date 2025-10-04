#include<stdio.h>

int main()
{
    int n, i, reminder, digit, reverse ;
    printf("enter your number");
    scanf("%d", &n );

    while ( n > 0)
    {
        reminder = n%10;
        reverse = reverse*10 + n;
        n = n/10;
    }
    
    printf("your reverse num is : %d", reverse);



    return 0;
}