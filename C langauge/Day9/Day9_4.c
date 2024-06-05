#include<stdio.h> 
enum color
{
    RED=1,BLUE,GREEN=1,VIOLET 
}; 
/*
    enum operation 
    {
        EXIT,ADD,SUB,MULTIPLY 
    };
    enum operation c1,c2,c3
        ************
    // anonymous enum 
    enum  
    {
        EXIT,ADD,SUB,MULTIPLY 
    }c1,c2,c3;
    

*/
// int main()
// {

//     enum color choice;
//     // datatype variable-name 

//     printf("Enter the choice"); 
//     scanf("%d",&choice); 

//     switch (choice)
//     {
//       case RED:   // case 1: 
//       printf("Red color");  
//       break;
        
//       case BLUE: // case 2: 
//       printf("Blue color");
//       break;   

//       case GREEN: // case 1: 
//       printf("Green color"); 
//       break;   

//       case VIOLET:  // case 2:  
//       printf("Green color"); 
//       break;     
//     }



// }

enum color
{
    RED=1,BLUE,GREEN 
}; 
int main()
{

    enum color choice; 

    printf("Enter the choice"); 
    scanf("%d",&choice); 

    switch (choice)
    {
      case RED: 
      printf("Red color");  
      break;
        
      case BLUE: 
      printf("Blue color");
      break;   

      case GREEN: 
      printf("Green color"); 
      break;   
     default:
        break;
    }



// }
// enum color
// {
//     RED=1,BLUE,GREEN 
// }; 
// int main()
// {

//     enum color choice; 

//     printf("Enter the choice"); 
//     scanf("%d",&choice); 

//     switch (choice)
//     {
//       case RED: 
//       printf("Red color");  
//       break;
        
//       case BLUE: 
//       printf("Blue color");
//       break;   

//       case GREEN: 
//       printf("Green color"); 
//       break;   
//      default:
//         break;
//     }



// }
// int main()
// {
    
//     int choice; 

//     printf("Enter the choice"); 
//     scanf("%d",&choice); 

//     switch (choice)
//     {
//       case 1: 
//       printf("Red color");  
//       break;
        
//       case 2: 
//       printf("Blue color");
//       break;   

//       case 3: 
//       printf("Green color"); 
//       break;   
//      default:
//         break;
//     }



// }