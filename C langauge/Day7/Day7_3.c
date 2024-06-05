#include<stdio.h> 

/*      
            Corona Pandamic 
        1. Variable declaration     
        2. Input the patient count
                a. if patient count >=1000 ( Impose the lockdown )
         

*/

int main()
{
    //If statement

    int count; 
    
    // 1. Input the count 
    printf("Enter the patient count "); 
    scanf("%d",&count);  // 2000 
  
    //2. processing 
    // >= --> relation operator --> 1(True) or 0(false) 
    //      2000>=1000 --> 1 --> True   
    //  count>=1000 --> expression / condition 
    //  if(1) --> if(true)
        if(count>=1000) 
        {
            printf("Impose the lockdown"); 
        }

    return 0; 

}




  