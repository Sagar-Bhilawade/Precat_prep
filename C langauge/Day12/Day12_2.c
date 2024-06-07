#include<stdio.h> 

int main()
{
    int outer_var  ; 
    {
        int inner_var = 500; 
        printf("%d",inner_var);  
    }
    printf("%d",inner_var);  
    return 0; 
}