#include "mbed.h"

// Initialize the serial interface
Serial pc(USBTX, USBRX);

// Recursive function to calculate Fibonacci term
int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Function to print Fibonacci sequence using recursion
void print_fibonacci_recursive(int n) {
    pc.printf("Fibonacci Sequence using recursion: ");
    for (int i = 0; i < n; ++i) {
        pc.printf("%d, ", fibonacci_recursive(i));
    }
    pc.printf("\n");
}

int main() {
    int n;

    pc.printf("Enter the number of terms: ");
    pc.scanf("%d", &n);

    print_fibonacci_recursive(n);

    while (true) {
        // Keep the program running
    }
}
