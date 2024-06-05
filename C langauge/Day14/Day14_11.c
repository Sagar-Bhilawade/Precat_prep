#include<stdio.h> 

int main()
{
    
    int arr[5]= {1,2,3,4,5};// init list
    
    /*
            1     2     3     4     5
           [0]   [1]   [2]   [3]   [4] (index/subscript)   
           100   104   108   112   116 (address)    
    */

        printf("%u \n",arr); 
        // arr --> name of array --> add of 1st element 
    
        printf("%u \n",arr+1); 
        /*
                arr + 1

                100 + 1 

                100 + 1 * 4 

                100 + 4 

                104 


        */

       printf("%u \n",arr+2); 
       /*
                arr + 2 
                100 + 2 
                100 + 2 * 4 
                100 + 8 
                108 

       */
      printf("%u \n",arr+3);
      /*
                arr+3
                100 + 3 
                100 + 3 * 4 
                100 + 12 
                112  

      */  
      printf("%u \n",arr+4);
      /*
                arr + 4 
                100 + 4 
                100 + 4 * 4 
                100 + 16 
                116 

      */

    






}