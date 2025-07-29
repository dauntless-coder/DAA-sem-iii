#include <stdio.h>
void printNumbers(int num) {
    int i;
    for (i = 1; i <= num; i++) {
        printf("%d ", i);
    }
}

int main() { 
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printNumbers(num); // func call 
    return 0;
}
