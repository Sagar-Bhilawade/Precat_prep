#include<stdio.h> 

// I/P --> Ammount 
int main()
{
    double ammount,discount; 

    printf("Enter the ammount");
    scanf("%lf",&ammount); 
    // 4000>=5000 --> false 
    // False --> 0 
    // if(0) -> zero(False ) 
    if(ammount>=5000) 
       ammount = ammount * 0.90;  
    
    printf("Final Ammount %lf",ammount); 


    return 0; 
}