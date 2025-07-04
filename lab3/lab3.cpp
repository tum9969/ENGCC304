#include <stdio.h> // แก้ไข <stduio.h> เป็น <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    for (int i = 2; i <= (int)sqrt(num); i++) { // Explicitly cast sqrt(num) to int
        if (num % i == 0) {
            return 0; // Not prime if divisible by any number
        }
    }
    return 1; // It's prime
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    // Dynamic array allocation is better for VLA, but for C99 it's allowed.
    // Ensure n is positive to avoid issues with array declaration.
    if (n <= 0) {
        printf("N must be a positive integer.\n");
        return 1; // Indicate an error
    }
    int arr[n]; 

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:  ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    printf("Array:  ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%2d ", arr[i]);
        } else {
            // Corrected format specifier from %2s to %c for a single character
            printf("%2c ", '#'); 
        }
    }
    printf("\n");

    return 0;
}