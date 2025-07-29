#include<stdio.h>
// QuickSort implementation 
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
Pick a Pivot Element (usually the last, first, or middle element).
Partition the array:

Rearrange elements so that:
Elements less than pivot go to the left,
Elements greater than pivot go to the right.
The pivot is now in its correct sorted position.
Recursively apply the same logic to the left and right subarrays.*/
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index

        quickSort(arr, low, pi - 1); // Sort left
        quickSort(arr, pi + 1, high); // Sort right
    }
}
/* 
int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
} */
/* when array is given*/
int main() {
    int arr[] = {25, 84, 10, 57, 117, 156, 48, 73, 36, 105, 122, 92, 149, 69, 134};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
