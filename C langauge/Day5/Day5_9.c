#include<stdio.h> 

int main()
{
    /*
    int num1 = 2; 
    int num2 = 2; 
    int num3 = 2;
    float ans; 
    ans = (num1 + num2 + num3 ) / 3; 
    //      (int + int + int) / (int )
    //          (int) / (int) 
    //             int   
    //LHS--> Float 
    //RHS --> INT 
    // FLOAT = INT 
    // INT --> 2
    // 2 --> FLOAT --> 2.00  
    printf("%.2f",ans);   

    */
    /*
            double 
            float 
            int 
            char 
    */

    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // // 1.66 
    // float ans; 
    // ans = (num1 + num2 + num3 ) / 3;
    // //    ( int + int + int) / (int )
    // //           ( int ) / ( int )
    // //               ( int)
    // // 1.66 
    // // int --> 1.66 -> 1.00 

    // printf("%.2f",ans);   

    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // // 1.66 
    // float ans; 
    // ans = (num1 + num2 + num3 ) / 3.0;
    // //    (int + int + int ) / (double )
    // //       (int) / ( double )
    // //            double 
    // // LHS --> Float
    // // RHS --> Double 
    // //Float <---- Double
    // printf("%.2f",ans);  // 1.67  

    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // // 1.66 
    // float ans; 
    // ans = (num1 + num2 + num3 ) / 3.0f;
    // //    (int + int + int ) / (float )
    // //       (int) / ( float )
    // //            float 
    // // LHS --> Float
    // // RHS --> float 
    // //Float <---- float
    // printf("%.2f",ans);  // 1.67  

    int num1 = 2; 
    int num2 = 2; 
    int num3 = 1;
    // 1.66 
    float ans; 
    //      explicit type casting 
    ans = ((float)num1 + num2 + num3 ) / 3;
    //    (float + int + int ) / (int )
    //       (float) / ( int )
    //            float 
    // LHS --> Float
    // RHS --> float 
    //Float <---- float
    printf("%.2f",ans);  // 1.67  


    



}