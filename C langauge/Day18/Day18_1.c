#include<stdio.h> 

int main()
{   
    
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    //  3 rows and 3 columns  
    int i; 
    int j; 
    /*
        arr      
                    matrix 
              [0]     [1]      [2] 
    [0]        1       2        3
              100     104      108  

    [1]        4       5        6 
               112     116      120 

    [2]        7       8        9 
              124      128      132     
    */
     
     printf("\n\n"); 
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
               printf("%u ",&arr[i][j]);  
         }
         printf("\n"); 
     }
     printf("\n"); 

     //printf("%u\n",arr); // base address
     //printf("%u\n",&arr[0][0]); // base address 


       //printf("%u\n",arr); // base address

       //printf("%u\n",arr+1);
       /*
            arr + 1 
            100 + 1 * 12 
            100 + 12 
            112 
       */

      //printf("%u\n",arr+2);


       printf("%u\n",*(arr+0));
       /*   
                *(arr+0)
                *(400+0)
                *(400)
                  400 

       */
       printf("%u\n",*(arr+1));
       /*
                *(arr+1)
                *(400+1)
                *(416)
                 416 
       */
       printf("%u\n",*(arr+2)); 

      

    return 0; 
}