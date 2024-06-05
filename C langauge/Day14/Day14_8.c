#include<stdio.h> 

int main()
{
    // int num1,num2,num3,num4,num5


    int arr[5]= {1,2,3,4,5};// init list
    // [ ] --> subscript operator   
    
    /*
            ( 0 to n-1 )
            ( 0 to 4   )
                arr 

            1     2     3     4     5
           [0]   [1]   [2]   [3]   [4] (index/subscript)   
           100   104   108   112   116 (address)    
    */
   // if i want to print 1 
   // i will use the name of the array --> arr 
   // arr --> arr[0] --> 1 

        // subscript operation 
    // printf("%d",arr[0]); // 1 
    // printf("%d",arr[1]); //2 
    // printf("%d",arr[2]);// 3
    // printf("%d",arr[3]);//4 
    // printf("%d",arr[4]);//5   

      int i; 
        // 0 to 4 
      for(i=0;i<5;i++)
      {
            printf("%d",arr[i]); 
      }  


    return 0; 
}