#include <stdio.h>

// Binary Search Function
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;
    
    while (low <= high) {
      mid = low + (high - low) / 2; //   to prevent overflow

        if (arr[mid] == key)
            return mid; // found

        else if (arr[mid] < key)
            low = mid + 1;

        else 
            high = mid - 1;
    }

    return -1; // not found
}

int main() {
    int arr[100], n, i, key, result;

    printf("Enter the no. of  elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result == -1)
        printf("Element not found in the array \n");
    else
        printf("Element found at index %d \n", result);

    return 0;
}
