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
    if(ammount>=5000) // 5000
    {
        discount = ammount * 0.10; 
        ammount = ammount - discount; 
    }

    printf("Final Ammount %lf",ammount); 


    return 0; 
}