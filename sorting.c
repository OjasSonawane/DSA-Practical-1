#include <stdio.h>

//bubble sorting 
void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//initializing main function
int main() {

    //declaration of an array in random order
    int arr[5] = {20, 10, 50, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    
    bubbleSort(arr, n);
    
    //printing the ramdomized array in an ascending order
    printf("\nArray in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    //printing the ramdomized array in an descending order
    printf("\nArray in descending order:\n");
    for (int i=0 ; i > n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}

