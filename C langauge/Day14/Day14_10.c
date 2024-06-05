#include<stdio.h> 

int main()
{
    
    int arr[5]= {1,2,3,4,5};// init list
    //printf("%d\n",sizeof(arr));// 20 
    //printf("%d\n",sizeof(arr[0]));//4  
    /*
            1     2     3     4     5
           [0]   [1]   [2]   [3]   [4] (index/subscript)   
           100   104   108   112   116 (address)    
    */

    //printf("%d",arr[0]); // 1 

      //printf("%u",&arr[0]); // 1     

        int i; 
        // for(i=0;i<5;i++)
        // {
        //     printf("%u ",&arr[i]); 
        //     // &arr[0] &arr[1] ...&arr[4]
        // }
  // name of the array represents address of first element   
  //  arr --> address of first element 

        printf("%u \n",&arr[0]); 
        // address of 1st elements 
        printf("%u \n ",arr); 
        // address of 1st elements







}