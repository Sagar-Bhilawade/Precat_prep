#include<stdio.h> 

int main()
{
    // while --> entry controlled loop 
    /*
            while(condtn)
            {
                // Statements 
            }
    */
   // for loop --> entry controlled loop 
    /*
            for(step1;step2;step4)
            {
                step3; 
            }
            step 1 --> executed only once 

    */

    // int i; 

    // for(i=1;i<=5;i++)
    // {
    //     printf("\n%d",i); //1 2 3 4 5      
    // }
    // printf("\nOutside the loop %d",i); 
    // 
            // for(step1;step2;step4)
            // {
            //     step3; 
            // }
            // step 1 --> executed only once 


    // int i=1; 

    // for(;i<=5;i++)
    // {
    //     printf("\n%d",i); //1 2 3 4 5      
    // }
    // printf("\nOutside the loop %d",i); 
 


    int i=1; 
    //for(  ; i<=5  ;  )
    for( ; i<=5 ;)
    {
        printf("\n%d",i++); //1 2 3 4 5      
    }
    printf("\nOutside the loop %d",i); 
 



    return 0; 
}