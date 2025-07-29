#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0; // 0 and 1 are not prime

    for (int i = 2; i <= n / 2; i++) { // Check for factors from 2 to n/2 because a factor larger than n/2 cannot divide n evenly
        if (n % i == 0) // If n is divisible by i, then it is not prime
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is Not a Prime number.\n", num);

    return 0;
}
