#include <stdio.h>
int main()
{
    
   int position, i, n;
int arr[5] = {10, 20, 30, 40, 50};
    
    // Traversing the array using a for loop

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
   
   //Initiating the location for deleting an element

   printf("\nEnter the location where you wish to delete element:");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = position - 1; i < n - 1; i++)
         arr[i] = arr[i+1];
      
      //Printing the Updated Array after deletion
      
      printf("Updated Array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", arr[i]);
   }

   return 0;
}