#include<stdio.h> 

int main()
{
    int arr[][4]={1,2,3,4,5,6,7,8,9}; 
    int r,c;  
    /*
            [0]     [1]     [2]     [3]   
    
     [0]     1       2       3       4   

     [1]     5       6       7       8 

     [2]     9       0       0       0                 


    */

    for(r=0;r<3;r++)
    {
            for(c=0;c<4;c++)
            {
                printf("%4d",arr[r][c]);   
            }
            printf("\n"); 
    }

}