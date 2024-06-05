#include<stdio.h> 

int main()
{
    // jump statment --> break 
    // break , return , continue , goto 

        // int i = 3; 

        // if(i==3) //break statement not within loop or switch
        //   break; 

        int i; 

        for(i=1;i<=5;i++)
        {
                printf("Inside %d\n ",i);//123 
                if(i==3) // 3==3
                 break;  
        }
        // break is taking the control outside the loop 
        printf("\nOutsideside %d ",i);


    return 0; 
}