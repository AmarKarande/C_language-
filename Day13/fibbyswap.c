#include<stdio.h>

int fib(int num);

int main() {
    int result = fib(10);
    return 0;
}

int fib(int num) {
    int a = 0;
    int b = 1;
    int sum;
    
    // Print the first two numbers explicitly
    printf("%d ", a);  // First Fibonacci number
    if (num > 1) {
        printf("%d ", b);  // Second Fibonacci number
    }

    // Start the loop from the 3rd number (index 2)
    for (int i = 2; i <=num; i++) {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;  // Not strictly necessary here but good practice to return an int
}
