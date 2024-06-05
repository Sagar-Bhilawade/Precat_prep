#include<stdio.h> 

int main()
{
    // Logical operators 
    // && --> logical AND 
    //|| --> Logical OR 
    // ! --> logical negation 
    // logical operator --> 1 or 0 
    //T and T
    // Nonzero ( -ve ) --> TRUE
    //  0 --> False  

    // int ans; 
    // int a = 1; 
    // int b = 2;
    // ans = a && b; // LOGICAL AND 
    // //    1 && 2
    // //   TRUE && TRUE 
    // //      TRUE 
    // // ans = TRUE 
    // // ans = 1  
    // printf("ans=%d a=%d b=%d",ans,a,b); 


    // int ans; 
    // int a = 1; 
    // int b = 0;
    // ans = a && b; // LOGICAL AND 
    // //    T && F 
    // //      F --> 0 
    // printf("ans=%d a=%d b=%d",ans,a,b); 
  
    // int ans; 
    // int a = 1; 
    // int b = 22;
    // ans = a || b; // LOGICAL OR 
    // //   T  || XXX 
    // // ans = true --> 1 
    
    // printf("ans=%d a=%d b=%d",ans,a,b); 
    
    // int ans; 
    // int a = 0; 
    // int b = 22;
    // ans = a || b; // LOGICAL OR 
    // //    F || T 
    // //      T --> 1  

    // printf("ans=%d a=%d b=%d",ans,a,b); 
    
    int ans; 
    int a = 0; 
    int b = 0;
    ans = a || b; // LOGICAL OR 
    //    F || F 
    //      F --> 0  

    printf("ans=%d a=%d b=%d",ans,a,b); 
   






    return 0; 
}