#include<stdio.h> 

/*      
            Corona Pandamic 
        1. Variable declaration     
        2. Input the patient count
                a. if patient count >=1000 ( Impose the lockdown )
                b  else Release the lockdown 
         

*/

int main()
{
    //If statement

    int count; 
    
    // 1. Input the count 
    printf("Enter the patient count "); 
    scanf("%d",&count);  // 500 
  
    //2. processing 
    // >= --> relation operator --> 1(True) or 0(false) 
    //      500>=1000 --> 0 --> False  
    //  count>=1000 --> expression / condition 
    //  if(0) --> if(False)
        if(count>=1000) // 500 >=1000--> F->0 if(0)
        {
            printf("Impose the lockdown"); 
        }
        else 
        {
            printf("Release the lockdown ")
        }

    return 0; 

}




  