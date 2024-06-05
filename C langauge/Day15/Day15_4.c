#include<stdio.h> 
void readArray(int arr[],int size); 
void printArray(int arr[],int size); //array notation 
int main()
{
    int arr[5]; 

    printf("Enter the elements of the array\n"); 
    readArray(arr,5);
    // arr --> name of array --> base address 

    printf("Elements of the array are \n"); 
    printArray(arr,5); 
    //arr--> name of array --> base address   
}
// if i want to pass array to the function 
// i need to pass the baseaddress 
// array <--> pass by address
void readArray(int arr[],int size) //array notation 
{
        int i; 
        for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]); 
        }
}   

void printArray(int arr[],int size) //array notation 
{
        int i; 
        for(i=0;i<size;i++)
        {
            printf("%d",arr[i]); 
        }
}   
