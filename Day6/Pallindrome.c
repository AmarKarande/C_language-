#include <stdio.h>

int main() {
    int reversed = 0, original, remainder;
    int num = 12345;
    // original = num;  

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;           // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
       
        num /= 10;                      // Remove the last digit
        
    }
     printf("%d",reversed);

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
