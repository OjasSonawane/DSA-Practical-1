#include <stdio.h>

int main() {
    int i,x,n,pos ;
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Traversing the array using a for loop
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
	// element to be inserted

	x = 55;

	// position at which element is to be inserted

	pos = 3;
	n++;

	for (i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];

	// insert x at pos
	arr[pos - 1] = x;

	// print the updated array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}