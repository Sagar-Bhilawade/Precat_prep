#include<stdio.h> 

int main()
{
    int ans; 
    // Left shift operator ( bitwise )
    //ans = 10 << 2;  
    /*
            0000  1010  --> Binary of 10 
               << 2
            0010  1000    

    */
   //printf("%d",ans); //40 
   /*
            Left shift 
            multiply by 2 to the power n 

            10 * 2 to the power 2 
            10 * 4 
            40 


   */

        ans = 10 >> 2; 
        /*
            Bitwise ( binary of 10 )

            0000 1010 

               >>2 
            0000 0010


        */
       printf("%d",ans); //2 

        /*
                divide by 2 to the power n 

                10 / 2 to the power n 
                10 / 2 to the power 2 
                10 / 4 
                2 

        */



    return 0; 
}