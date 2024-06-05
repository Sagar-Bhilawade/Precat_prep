#include<stdio.h> 

int main()
{
    int num  = 2; 

    switch (num)
    {
        case 1: 
        printf("One");     
        break;
    
        case 2-2+1:  // --> 2 > 1 --> 1 --> case 1://not allowed
        printf("Two"); 
        break;  

    default:
        break;
    }
}