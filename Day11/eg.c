#include <stdio.h>

int main() {
    printf("ASCII Table:\n");
    printf("Decimal  Hex   Character\n");
    printf("------------------------\n");

    // Loop through ASCII values from 32 to 126
    for (int i = 32; i <= 126; i++) {
        printf("%-8d %-5X %c\n", i, i, i); // Print Decimal, Hex, and Character
    }

    return 0;
}
