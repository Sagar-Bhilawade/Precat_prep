#include<stdio.h> 

//calculate peri of rectangle 


int main()
{
    // variable declaration 
    // 1.what will be my names of variable 
    // 2.what will be the type of that variable (datatype)

        double length,breadth,peri; // variable declaration 

        // 1. INPUT :  scan length and breadth 
        printf("Enter the length and breadth ");
        scanf("%lf%lf",&length,&breadth); 

        //2.Processing Logic 
        // 2 * ( length + breadth ) 

         peri = 2 * ( length + breadth);  

       //3. Output  : print the perimeter 

       printf("Peri = %.2lf\n",peri);   


    return 0; 
}
