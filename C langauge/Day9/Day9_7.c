#include<stdio.h> 

// enum operation 
// {
//     EXIT=0,ADD,SUB,MULT,DIV
// }; 

int main()
{
    int num1,num2; 
    int ans;
    int choice;   
    do
    {
        printf("0.Exit\n");
        printf("1.Add\n");
        printf("2.Sub\n");
        printf("3.Mult\n");
        printf("4.Div\n");

        printf("Enter the two numbers :\n");
        scanf("%d%d",&num1,&num2); 

        printf("Enter the choice:");
        scanf("%d",&choice); // 1 

        switch (choice) //1 
        {
        case 1: 
            ans = num1 + num2; 
            printf("%d",ans);  
            break;
            
        case 2: 
            ans = num1 - num2; 
            printf("%d",ans);  
            break;
            
        case 3: 
            ans = num1 * num2; 
            printf("%d",ans);  
            break;
            
        case 4: 
            ans = num1 / num2; 
            printf("%d",ans);  
            break;
        
        default:
            printf("Invalid choice"); 
            break;
        }

     printf("1 to continue and 0 to exit"); 
     scanf("%d",&choice);    
    }while(choice!=0); //1

    return 0; 
}