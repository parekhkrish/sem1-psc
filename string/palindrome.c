#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter your stetment : ");
    //fgets(str, sizeof str, stdin);
    gets(str);
    int n = strlen(str) ;
    int p = 1 ;
    for (int i = 0; i<n/2 ; i++)
    {
        if (str[i] != str[n-i-1] )
        {
            p = 0   ; 
        }  
    }
    if ( p == 1 )
    {
        printf("enterd statement is palidrome");
    }
    else
    {
         printf("enterd statement is not palidrome");
    }
}