#include<stdio.h> 

int main()
{
    int arr[5]= {11,22,33,44,55};// init list
    
    /*
            11    22    33    44    55
           [0]   [1]   [2]   [3]   [4] (index/subscript)   
           100   104   108   112   116 (address)    
    */

    int *ptr = arr; 
    printf("%d\n",*ptr); // 11 
    printf("%d\n",arr[0]);//11  
    printf("%d\n",++*ptr); 
    /*
            ++*ptr
            ++valueat(ptr)
            ++valueat(100)
            ++ ==> 11 
            12 
    */
     //printf("%d\n",arr[0]); //12
     
    printf("%d\n",*++ptr); // 22 
    /*1
            *++ptr
            * ==> ptr = ptr + 1 
            *         = 100 + 1 
            *         = 104
            * *(104) ==> 22   
    */
    
    printf("%d\n",*ptr++);// 22 
    /*
            *ptr --> (1 step ) --> 22 

            ptr ++ 
            ptr = ptr + 1 
                = 104 + 1
                = 108 
    */ 
        printf("%d",*ptr); // 33   
     printf("%d",++*ptr++);
     printf("%d",*ptr);
     
        //++*ptr++;// Homework 

        


}