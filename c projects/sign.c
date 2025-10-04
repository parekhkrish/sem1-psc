#include<stdio.h>
/*i have made this program using nested if and else
ther is anoter method called if else ladder reamber that
in ladder if else we use elseif statemant*/
int main()
{
    int num ;
    printf("\tenter number : ");
    scanf("%d", &num );

    if( num>=0 )
    {
        if( num==0 )  /*this if was nested*/
        {
            printf("\tzero\n");
        }
        else
        {
            printf("\tnumber you entered is positive\n");
        }
    }
    else
    {
        printf("\tthe number you entered is negative\n");
    }

    return 0;
}


    
