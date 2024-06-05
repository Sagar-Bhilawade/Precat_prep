#include<stdio.h> 

int main()
{
    int arr[5] ={1,2,3,4,5}; 
    /*
            1     2     3     4     5
           [0]   [1]   [2]   [3]   [4] (index/subscript)   
           100   104   108   112   116 (address)    
    */
    int *ptr = arr; 
    // int *ptr = &arr[0]; 
    // ptr is holding the base address 

    //printf("%u ",ptr);// base address of arr

     //printf("%u ",*ptr); 
     /*
                *ptr 
                valueat(ptr)
                valueat(100)
                1  
     */  

    //   printf("%u\n",ptr); // 100     
    //   printf("%u\n",ptr+1);
    //   // ptr + 1 --> 100 + 1 --> 100 + 1 * 4 --> 104
    //   printf("%u\n",ptr+2);
    //   // ptr + 2 --> 100 + 2 --> 100 + 2 * 4 --> 108 
    //   printf("%u\n",ptr+3);
    //   printf("%u\n",ptr+4);

     printf("%u ",*ptr); 
     /*
                *ptr 
                valueat(ptr)
                valueat(100)
                1  
     */  
        printf("%d ",*(ptr+1));
        /*
                *(ptr+1)
                valueat(100 + 1)
                valueat(100 + 1 * 4 )
                valueat(100 + 4)
                valueat(104)
                2 
        */
       printf("%d ",*(ptr+2));
       /*
                *(ptr+2)
                valueat(ptr + 2)
                valueat(100 + 2 * 4 )
                valueat(100 + 8 )
                valueat(108)
                3 

       */ 
      printf("%d ",*(ptr+3));
      /*
            *(ptr+3)
            valueat(100 + 3)
            valueat(100 + 3 * 4)
            valueat(100 + 12)
            valueat(112)
            4 

      */
     printf("%d ",*(ptr+4));
     printf("%d ",*(4+ptr));


    printf("%u \n",arr); 
    
    return 0; 
}