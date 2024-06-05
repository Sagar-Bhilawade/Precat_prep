#include<stdio.h> 

int main()
{
    //int num; // variable declaration 

    int num = 10; // variable declaration + Initialization    
    // variable init can be done only once 

    printf("prev num = %d\n",num); // 10  
    
    num = 100;  // assignment 

    printf("after updated num = %d\n",num); // 100  

    num = 1000; // assignment 

    printf("after second updated num = %d\n",num); // 1000
    // assignment can be done multiple number of times 
    return 0; 
}
