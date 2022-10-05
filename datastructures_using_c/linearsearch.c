/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void linearSearch(int arr[],int key, int n) {
    int flag=0;
    int i;
   for(i=0;i<n;i++)
   {
       if(arr[i]==key)
       {
       flag=1;
       break;
       }
   }
   if(flag==1)
   {
       printf("%d is found %d position",key,i+1);
   }
   else 
   {
       printf("%d is not found",key);
   }
  
   
}
  

int main()
{
    int data[] = {12, 2, 16, 30, 8};
    int key;
    printf("enter a key to search \n");
    scanf("%d",&key);
   linearSearch(data,key, 5);
 
}
