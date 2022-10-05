/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void insertionSort(int array[], int size) {
    
   for (int pass = 0; pass < size; pass++) {
    int key = array[pass];
    int j = pass - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    
    array[j + 1] = key;
    printf("%d",pass);
    for(int i=0;i<size;i++)
    {
    printf(" %d\t",array[i]);
    }
    printf("\n");
  }

    
}
int main()
{
    int data[] = {12, 2, 16, 30, 8};
   insertionSort(data, 5);
   for(int i=0;i<5;i++)
    printf("%d\t",data[i]);
    return 0;
}
