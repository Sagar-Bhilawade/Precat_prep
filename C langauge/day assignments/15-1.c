#include<stdio.h>
void reverse_array(int arr[],int size);
int main()
{  
    int arr[5]={1,2,3,4,5};
    printf("original array:");
    for(int i=0;i<5;i++)
    {
        printf("%4d",arr[i]);
    }
    reverse_array(arr,5);
    return 0;

}
void reverse_array(int arr[],int size)
{     printf("reversed arraay:");
      for(int i=size-1;i>=0;i--)
     {
         printf("%4d",arr[i]);
     }
     printf("\n");
}