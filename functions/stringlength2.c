#include<stdio.h>
#include<string.h>
int n = 0;
char str[100];
void printstrlen(int n)
{ 
    while (str[n] != '\0')
    {
        n++;
    }
    printf("%d\n", n);  
}
int main()
{   
    printf("enter your string :");
    gets(str);
   
    printstrlen(n);
    return 0;
}