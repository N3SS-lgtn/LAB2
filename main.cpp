#include "mbed.h"

// Initialize the serial interface
Serial pc(USBTX, USBRX);

// Function to print Fibonacci sequence using loops
void fibonacci_loop(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    pc.printf("Fibonacci Sequence using loops: ");

    for (int i = 1; i <= n; ++i) {
        pc.printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    pc.printf("\n");
}

int main() {
    int n;

    pc.printf("Enter the number of terms: ");
    pc.scanf("%d", &n);

    fibonacci_loop(n);

    while (true) {
        // Keep the program running
    }
}
