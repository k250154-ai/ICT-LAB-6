#include <stdio.h>

int main() {
    int num, digit, evenCount = 0, oddCount = 0;

    printf("Enter the electricity meter reading: ");
    scanf("%d", &num);

    // If the user enters 0, handle it separately
    if (num == 0) {
        evenCount = 1;
    } else {
        while (num != 0) {
            digit = num % 10;  // extract last digit
            if (digit % 2 == 0)
                evenCount++;
            else
                oddCount++;
            num = num / 10;   // remove last digit
        }
    }

    printf(" Even digits: %d\n", evenCount);
    printf(" Odd digits: %d\n", oddCount);

    return 0;
}
