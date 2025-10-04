#include<stdio.h>
int main()
{
    char p[45] = "abcdef";
    char ch ;

    scanf("%s", p );
    printf(" \n%s", p );
    printf("\n%10s", p);
    printf("\n%-10sdef", p );
    printf("\n%*.*solp", 5,3,p);



    return 0;


}