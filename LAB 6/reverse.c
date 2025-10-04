#include <stdio.h>

int main() {
    char Digits[50], ReverseDigits[50];
    int i = 0;

    printf("Enter the ticket Digits: ");

    while (i < 49) {   
        Digits[i] = getchar();

        if (Digits[i] == '\n') { 
            break;
        }

        i++;
    }

    Digits[i] = '\0'; 

    printf("The ticket Digits are: %s\n", Digits);

    // reverse 
    for (int counter = 0; counter < i; counter++) {
        ReverseDigits[counter] = Digits[i - 1 - counter];
    }

    ReverseDigits[i] = '\0'; 

    printf("The reversed Digits are: %s\n", ReverseDigits);

    return 0;
}
