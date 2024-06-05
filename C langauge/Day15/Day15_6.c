#include<stdio.h> 
void printArray(int *ptr,int size); 
int main()
{
    int arr[5]= {1,2,3,4,5};
    printf("%d\n",arr[1]); // 2  
    printf("%d\n",arr[arr[0]]);// arr[1] --> 2  
    int i; 
    printf("Enter the elements of the array\n"); 
  
    printf("Elements of the array are \n"); 
    //printArray(arr,5); 
    //arr--> name of array --> base address   
    printf("\n\n"); 
    for(i=0;i<5;i++)
    {
        printf("%d \n",arr[i]); 
    }
}

void printArray(int *ptr,int size) //array notation 
{
        int i; 
        for(i=0;i<size;i++)
        {
            printf("%d",ptr[i]);
        }
        for(i=0;i<size;i++)
        {
                ++ptr[i];// ptr[0]
                // ptr[0] ==> *(ptr+0)
                // *(100 + 0 )
                // ++*(100)
                //  2 
        }
}   
