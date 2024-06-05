#include<stdio.h> 

int main()
{
     int arr[5]= {1,2,3,4,5};// init list
    
    /*
            1     2     3     4     5
           [0]   [1]   [2]   [3]   [4] (index/subscript)   
           100   104   108   112   116 (address)    
    */
     //printf("%u \n",arr); // base address
     printf("%d \n",*arr);
     /*         
            *arr
            valueat(arr)
            valueat(100)
             1 
     */  

     printf("%d\n",*(arr+1)); // 2  
     /*
            *(arr+1)
            *(100 + 1) 
            *(100 + 1 * 4)
            *(100 + 4 )
            *(104)
             2 

     */  
      printf("%d\n",*(arr+2)); 
      /*
                *(arr+2)
                *(100 + 2 )
                *(100 + 2 * 4 )
                *( 100 + 8 )
                *(108 )
                3 
      */
     printf("%d\n",*(arr+3));
     /*
                *(arr+3)
                *(100 + 3 )
                *(100 + 3 * 4 )
                *(100 + 12 )
                *(112)
                4 

     */ 
    printf("%d\n",*(arr+4));
    printf("%d\n",*(4+arr));
    printf("%d\n",*(arr+2+2));

    /*
            arr[1] --> array notation 
            1[arr] --> array notation 
            arr[2-1] --> arr[1]

           *(arr+1) --> pointer notation      
           *(1+arr) --> pointer notation  
    */

    return 0; 
}