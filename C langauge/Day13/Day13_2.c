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
        int result = 1; 
        int i; 

        for(i=1;i<=num;i++)
        {
            result = result * i; 
        }
        return result; 

    
       return result; 
               
} 


/*


        myfact()
        main()  


*/ 

