#include<stdio.h> 

int main()
{
    //Width specifier 

    int num = 10; 

    //printf("%d",num); //10

     // printf("%6d",num);  //Right justified
      // - - - - - -   
      //         1 0 

      //printf("%-6d",num); // left justified
      //- - - - - -
      //1 0    
        
      //  printf("%06d",num); // left justified
        // - - - - - - 
        // 0 0 0 0 1 0   

        float fvar =12.50; 

       // printf("%f",fvar);// 12.500000 


        //printf("%6.2f",fvar);
        // - - - - - - 
        //   1 2 . 5 0  

        //printf("%-6.2f",fvar);
        // - - - - - - 
        // 1 2 . 5 0  

        // printf("%.3f",fvar);//upto 3 decimal 

        printf("%.f",fvar); // 13 

    return 0; 
}


