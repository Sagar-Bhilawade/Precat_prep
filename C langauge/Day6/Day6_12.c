#include<stdio.h> 

int main()
{
    // int a = 1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 
    // ans = a || b && c;
    // //    T || XXXX
    // //     T --> 1 
    // // ans -> 1  
    // //    a || ( b && c )  
    // // || --> logical OR 
    // // && --> logical AND  
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c);

    // int a = 1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 
    // ans = a || b++ && c++;
    //     // a || (b++ && c++);
    //     // T || XXXXX
    //     // T 
    //     // ans --> T 
    //     // ans --> 1 
    
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 


    // int a = 0; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 
    // ans = a || b++ && c++;
    // //  a || (b++ && c++);
    // //  F || (T++ && T++ )
    // // F  || T 
    // //  T 
    // // ans --> T -->1 
    // //ans=1 a=0 b=3 c=4
       
     
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 


    // int a = 0; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 
    // ans = a++ || b++ && c++;
    // //   a++ || (b++ && c++);
    // //   F++ ||  T++ && T++  
    // //   F++ ||  T 
    // //      T  
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 

    // // int a = 0; 
    // // int b = 0; 
    // // int c = 3; 
    // // int ans; 
    // // ans = a++ || b++ && c++;
    // // ans=0 a=1 b=1 c=3
    // //    a++ || (b++ && c++);
    // //    F++ || (F++ && XXXX);
    // //    F++ || F++
    // //      F   
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 


    // int a = 0; 
    // int b = 0; 
    // int c = 3; 
    // int ans; 
    // ans = a++ && b++ || c++;
    // //ans=1 a=1 b=0 c=4
    // //    (a++ && b++) || c++;
    // //     F++ && XXXX || T++ 
    // //      F++ || T++ 
    // //          T  
   
    
    // int a = 0; 
    // int b = 0; 
    // int c = 3; 
    // int ans; 
    // ans = ++a && b++ || c++;
    // // 
    //     //(++a && b++) || c++;
    //     // ++F && F++  || T++
    //     // (T && F) || T++
    //     //   F || T++ 
    //     //  T++ --> post 
    //     // ans --> 1  
   
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 


    // int a =1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 
    // ans = a++ || b++ || c++;
    // //    T++ || XXXX || XXXX 
    // //     T++ --> 1 
    // // ans = 1   
   
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 


    // int a = 0; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 
    // ans = a++ && b++ && c++;
    //  ( a++ && b++) && c++;
    //  ( F++ && XXXX)&& c++
    //   F++ && XXXX 
    //  F--> ans --> 0    

    
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 


    int a = 0; 
    int b = 2; 
    int c = 3; 
    int ans; 
    ans = a++ || b++ && ++c && a++ || b++;
    //  a++ || ((b++ && ++c) && a++) || b++;
    //  F++ || ((T++ && ++T) && a++) || b++
    //  F++ || ( T && T) || b++
    // F++ || T || b++
    //   T || XXXX
    
    
    printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 

 















    return 0; 



}