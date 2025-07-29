#include<stdio.h>
//find max and min within an array using divide and conquer method
int global_max, global_min;
void findMaxMin(int arr[], int low, int high ){
    if (low == high){// only one element
        global_max = arr[low];
        global_min = arr[high];
    } 
    else if( high == low + 1){ //two elements
        if (arr[low] > arr[high]){
            global_max = arr[low];
            global_min = arr[high];
        }
        else{
            global_max = arr[high];
            global_min = arr[low];
        }

        }
    else { // more than two elements 
        int mid = (low + high) / 2;
        findMaxMin(arr, low, mid); // left half
        int min_left = global_min;
        int max_left = global_max;
        findMaxMin(arr, mid + 1, high); // right half
        int min_right = global_min;
        int max_right = global_max;

        // Compare and update global_max and global_min
        if (max_left > max_right) {
            global_max = max_left;
        } else {
            global_max = max_right;
        }

        if (min_left < min_right) {
            global_min = min_left;
        } else {
            global_min = min_right;
        }
    }
}

int main (){
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);                
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    global_max = arr[0]; // Initialize global_max
    global_min = arr[0]; // Initialize global_min
    findMaxMin (arr, 0, n-1); // func calling
    printf("Maximum element is: %d\n", global_max);
    printf("Minimum element is: %d\n", global_min);
    return 0;
}
