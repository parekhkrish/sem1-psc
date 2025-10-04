#include<stdio.h>

int main()
{
    float a, b, sum, sub, div, multi, modulo ;
    char op ;
    
    printf("\n\tenter your first number :");
    scanf("%f", &a );
    printf("\tenter your second number :");
    scanf("%f", &b );

    

    printf("\tenter the symbol which process you want to do:");
    scanf(" %c" , &op );

        switch (op)
        {
        case '+':
                sum=a+b;
                printf("\t%f", sum );            
            break;
        case '-' :
                sub = a - b;
                printf("\t%f", sub );                                
            break;
        case '*' :
                multi = a * b;
                printf("\t%f", multi );                                
            break;   
        case '/' :
                div = a / b;
                printf("\t%f", div );                                
            break;    
        
            return 0 ;



        }



}