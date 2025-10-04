#include<stdio.h>

int main(){

    int PIN,sum = 0;
    
    for ( int i = 0; i < 4; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&PIN);

        sum = sum + PIN;

    }
    if (sum >= 10)
    {
        printf("Strong PIN");
    }
    else
    {
        printf("Weak PIN");
        
    }

    return 0;
}