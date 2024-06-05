#include<stdio.h> 


int main()
// {
//     int a = 1;
//     int b = 2; 
//     int ans; 

//     ans = a++ && b; 
//     printf("ans=%d a=%d b=%d",ans,a,b);
   
    // int a = 0;
    // int b = 2; 
    // int ans; 

    // ans = a++ && b; 
    //       F++ && XXXX
    //          F++ --> post incre      
    // printf("ans=%d a=%d b=%d",ans,a,b);//0 1 2
  
    // int a = 0;
    // int b = 2; 
    // int ans; 

    // ans = a++ && ++b; 
    // //ans=0 a=1 b=2
    // printf("ans=%d a=%d b=%d",ans,a,b);
  


    int a = 0;
    int b = 2; 
    int ans; 

    ans = ++a && ++b; 
    //   ++F && ++T
    //    T && T 
    //      T 
    // ans --> T --> 1 
    //ans=1 a=1 b=3
    printf("ans=%d a=%d b=%d",ans,a,b);
   

  
  
    return 0; 
}