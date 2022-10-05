/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void selectionSort(int arr[], int n) {
    
   
   int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
        
        
 printf("pass%d\t",i);
   for(int k=0;k<n;k++)
   printf("%d\t",arr[k]);
   printf("\n");
      }
  
  }
  

int main()
{
    int data[] = {12, 2, 16, 30, 8};
   selectionSort(data, 5);
   printf("\n\n");
   printf("S-Sort\t");
   for(int i=0;i<5;i++)
    printf("%d\t",data[i]);
    return 0;
}
