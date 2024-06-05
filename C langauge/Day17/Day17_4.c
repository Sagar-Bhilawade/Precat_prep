#include<stdio.h> 

int main()
{   
    //      r  c 
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    //  3 rows and 3 columns  
    
    /*      
                    matrix 
              [0]     [1]      [2] 
    [0]        1       2        3
              100     104      108  

    [1]        4       5        6 
               112     116      120 

    [2]        7       8        9 
              124      128      132     
    */

    // array notation 
     printf("%d",arr[0][0]); //1 
     // 0th row and 0th col 
     printf("%d",arr[0][1]);//2
     printf("%d",arr[0][2]);//3

     printf("%d",arr[1][0]);//4 
     printf("%d",arr[1][1]);//5 
     printf("%d",arr[1][2]);//6 

     printf("%d",arr[2][0]);//7
     printf("%d",arr[2][1]);//8
     printf("%d",arr[2][2]);//9   

    
    return 0; 
}