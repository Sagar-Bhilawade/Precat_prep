#include<stdio.h> 
int fun(); 
int main()
{
        int num; 
        num = fun( ); // function call 
        printf("%d",num); 
}

// function can return only ONE value at at time 
// function defination 
int fun()
{
    return 11,12;
    //return 11; 
    //return 12;    
}