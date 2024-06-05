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

     int *ptr[3] ={arr,(int*)arr+1,(int*)arr+2};   
    //             100    104       108  
     printf("%u\n",ptr[0]);
     printf("%u\n",ptr[1]);
     printf("%u\n",ptr[2]); 

        //printf("%d\n",*ptr[0]);
        //printf("%d\n",*ptr[1]);
        //printf("%d\n",*ptr[2]); 
    
        //printf("%d\n",*(*(ptr+0)));
        //printf("%d\n",*(*(ptr+1)));
        //printf("%d\n",*(*(ptr+2))); 
        
        //pointer notation  
        // printf("%d\n",ptr[0][0]); //array notation 
        // printf("%d\n",*(*(ptr+0)+0));
        // printf("%d\n",*(*(ptr+0)+1));
        // printf("%d\n",*(*(ptr+0)+2));

        /*
                 printf("%d\n",ptr[0][0]); //array notation 
                 
                 // pointer notation 
                 printf("%d\n",*(*(ptr+0)+0));
       

        */

        // printf("%d\n",ptr[1][0]); //array notation 
        // printf("%d\n",*(*(ptr+1)+0));
        // printf("%d\n",*(*(ptr+1)+1));
        // printf("%d\n",*(*(ptr+1)+2));
  


    return 0; 
}