#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter the library book code: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check if original and reversed are same
    if (original == reversed)
        printf(" The book code is a palindrome.\n");
    else
        printf(" The book code is not a palindrome.\n");

    return 0;
}
