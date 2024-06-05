#include<stdio.h> 
//int arr[5];  // Global 
int main()
{
 

    int i; 
    int arr[5]= {1,2,3,4,5};// init list
    
    //int arr[5];  // local  ( garbage) 
    //int arr[5]= {1,2};//partial init 
    
    //int arr[5]= {1};//partial init 
    //int arr[];// NOT OK 
    //int arr[] = {1,2,3,4,5};  
    /*
            1     2     3     4     5
           [0]   [1]   [2]   [3]   [4] (index/subscript)   
           100   104   108   112   116 (address)    
    */
   // array bound checking is a job of programmer 

      for(i=0;i<5;i++)
      {
            printf("%d",arr[i]); 
      }  


    return 0; 
}

// int arr[100] ={ 1 } --> 100 * 4 --> 400 bytes 