#include<stdio.h>
void Bubble_sort_ascending(int ar[],int n)
{
  int i,j,temp;

  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-1-i);j++)
    {
       if(ar[j]>ar[j+1])      
       {
        temp = ar[j];
        ar[j] = ar[j+1];
        ar[j+1] = temp;
       }
    }
  }
}

void Bubble_sort_descending(int ar[],int n)
{
  int i,j,temp;

  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-1-i);j++)
    {
       if(ar[j]<ar[j+1]) 
       {
        temp = ar[j];
        ar[j] = ar[j+1];
        ar[j+1] = temp;
       }
    }
  }
}
int main()
{
  int i,n;

  printf("Enter the array size:");
  scanf("%d",&n);
 int arr[n];
  printf("\nEnter the array elements:");

  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  printf("\nThe array elements before sorting are\n:");
 for(i=0;i<n;i++)
  {
  printf("%d\t",arr[i]);
  }


  Bubble_sort_ascending(arr,n);

  printf("\nThe array elements after ascending sorting are\n:");
 for(i=0;i<n;i++)
  {
  printf("%d\t",arr[i]);
  }
printf("\nThe array elements after descending sorting are\n:");

 Bubble_sort_descending(arr,n);
 for(i=0;i<n;i++)
  {
  printf("%d\t",arr[i]);
  }

return 0;


}