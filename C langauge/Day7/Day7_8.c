#include<stdio.h> 
/*  
    I need to find greatest of 3 numbers 
    num1 num2 num3 
   
*/

int main()
{
    int num1 = 100; 
    int num2 = 200; 
    int num3 = 30; 
    // greatest of 3 numbers 
    if(num1 > num2) 
    {
        if(num1 > num3)
        {
            printf("%d is greatest",num1);
        }
        else 
        {
            printf("%d is greatest",num3); 
        }

    }
    else
    {
            if(num2>num3)
            {
                printf("%d is greatest",num2);  
            }
            else
            {
                printf("%d is greatest",num3);  
            }
            
    }
    
    return 0; 
}

