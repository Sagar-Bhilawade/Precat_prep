#include<stdio.h> 
int myfact( int num ); 
int main()
{
    int num = 5; 
    int result; 
                       
    result = myfact( num );  
    printf("Result = %d",result); 
    return 0; 
}
               
int myfact( int num )
{ 
        int result; 

        if(num==0) // terminating condtion 
            return 1; 
        else 
           result = num * myfact(num-1);         

    return result; 
               
} 




