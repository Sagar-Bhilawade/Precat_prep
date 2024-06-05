#include<stdio.h> 

int main()
{
    int arr[5]= {1,2,3,4,5};// init list
    
    /*
            1     2     3     4     5
           [0]   [1]   [2]   [3]   [4] (index/subscript)   
           100   104   108   112   116 (address)    
    */
       
    // arr++; //lvalue  error 
    // arr --> name of the array --> base address 
    // baseaddress  = baseaddress + 1 
    // 100 = 100 + 1 

      int *ptr1 = &arr[4]; // 116 
      int *ptr2 = &arr[0]; // 100 
      int ans; 
      ans = ptr1 - ptr2; 
      /*
            (ptr1 - ptr2)/(scale factor of ptr1)
            (116 - 100 ) / 4 
             16 / 4 
             4    

      */ 


     //printf("%d",ans);  

       int i; 

       for(i=0;i<5;i++)
       {
           printf("%u ",&arr[i]); 
       } 

       //printf("%u\n",arr); // base address
       printf("\n%u",&arr+1); 

       
    return 0; 
}


/*
        arr + 3 
        arr + 1 
        1 --> 20 
        2 --> 40 
        int arr[5] = {1,2,3,4,5}; ==> 20  
                     100
        arr ==> name of the array 
        arr + 1; // 4 bytes 

        &arr+ 1  ==> 20 


*/