#include<stdio.h>
void search(int ar[],int n)
{
  int i,x;
  printf("Enter the element:");
  scanf("%d",&x);

  for ( i = 0; i <n; i++)
  {
    if(ar[i]==x)
    {
      printf("Element found at position %d with index %d ",i+1,i);
      break;
    }
  }
  if(i==n)
  {
    printf("Element not found");
  }
  
}
int main()
{
  int n,i;
  printf("Enter a array size");
  scanf("%d",&n);

  int arr[n];

printf("\nEnter the array elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }

  search(arr,n);

  return 0;
}