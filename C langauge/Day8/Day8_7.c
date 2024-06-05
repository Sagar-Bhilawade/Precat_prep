#include<stdio.h> 

int main()
{
    // Iteration (loop)
            // Hello world --> 5 times 
    // printf("Hello world\n");
    // printf("Hello world\n");
    // printf("Hello world\n");
    // printf("Hello world\n");
    // printf("Hello world\n");
    /*
            while
            for
            do-while    
    */  

   /*
            start --> 1 
                1 --> printf("Hello world");
                2 --> printf("Hello world");
                3 --> printf("Hello world");
                4 --> printf("Hello world");
                5 --> printf("Hello world"); 
            end   -->5
   */

        // int i; // variable declaration 
        // i = 1; // Start  
        // while(i<=5)
        // //    1<=5 ==> while(1)
        // //    2<=5 ==> while(1)  
        // //    3<=5 ==> while(1) 
        // //    4<=5 ==> while(1)
        // //    5<=5 ==> while(1) 
        // //    6<=5 ==> while(0)
        // {   
        //     printf("Hello world");
        //     i++;  
        // }


        int i; // variable declaration 
        i = 1; // assignment   
        while(i<=5) // Entry controlled loop 
        {   
            /*
                1<=5
                2<=5
                3<=5
                4<=5
                5<=5
                6<=5 --> false 
            */
            printf("Hello world");
            ++i;  
        }

    
    return 0; 
}