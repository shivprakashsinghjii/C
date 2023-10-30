#include <stdio.h>

void sieveOfEratosthenes(int n) {
    // Create an array to mark prime numbers
    int isPrime[n + 1];
    for (int i = 2; i <= n; i++) {
        isPrime[i] = 1; // Assume all numbers are prime initially
    }

    // Mark non-prime numbers
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = 0;
            }
        }
    }

    // Print prime numbers
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = 100; // Change this to the desired upper limit
    sieveOfEratosthenes(n);
    return 0;
}
