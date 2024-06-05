#include<stdio.h> 
// jump statment --> break 

int main()
{
    int choice;
    printf("Enter the choice"); 
    scanf("%d",&choice);  
      
    switch(choice) 
    {
        case 2: 
        printf("One\n");
        break; 

        case 1:
        printf("Two\n");
        break; 
        
        case 3: 
        printf("Three\n"); 
        break; 
    
        default: 
        printf("Invalid"); 
        break;  
    }

    return 0; 
}

// int main()
// {
//     int choice =55; 
      
//     switch(choice) //4
//     {
//         case 1: 
//         printf("One\n");
//         break; 

//         case 11:
//         printf("Two\n");
//         break; 
        
//         case 3: 
//         printf("Three\n"); 
//         break; 
    
//         default: 
//         printf("Invalid"); 
//         break;  
//     }

//     return 0; 
// }

// int main()
// {
//     int choice =55; 
      
//     switch(choice) //4
//     {
//         case 1: 
//         printf("One\n");
//         break; 

//         case 2:
//         printf("Two\n");
//         break; 
        
//         case 3: 
//         printf("Three\n"); 
//         break; 
    
//         default: 
//         printf("Invalid"); 
//         break;  
//     }

//     return 0; 
// }



// int main()
// {
//     int choice =2; 
      
//     switch(choice) //2
//     {
//         case 1: 
//         printf("One\n");
//         break; 

//         case 2:
//         printf("Two\n");
//         break; 
        
//         case 3: 
//         printf("Three\n"); 
//         break; 
//     }

//     return 0; 
// }
// int main()
// {
//     int choice =1; 
      
//     switch(choice) //1
//     {
//         case 1: 
//         printf("One\n");

//         case 2:
//         printf("Two\n");
        
//         case 3: 
//         printf("Three\n"); 
//     }

//     return 0; 
// }