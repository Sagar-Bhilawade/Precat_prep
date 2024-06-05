#include<stdio.h> 

int main()
{
    int a,b,c; 

    a = ( 1,2,3);  
    // a = 3

    b = ( ++a , ++a , ++a); 
    // b = 6 
    // a = 6  

    // b = 6 
    c = ( b++ , b++ , b++);

    printf("a=%d b=%d c=%d",a,b,c);  

}