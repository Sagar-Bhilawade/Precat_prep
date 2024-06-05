#include<stdio.h> 

// int sqr(int n ); // Global  declaration 
// int main()
// {
//     int num,result; 

//     printf("Enter the number"); 
//     scanf("%d",&num); 
//     result = sqr(num); 
//     // global defination 
//     // n = 2 
//     int sqr(int n)
//     {
//         int r; 
//         r = n * n; // 2 * 2 // 4  
//         return r;  // 4 
//     } 

//     printf("Result = %d",result); 
// }


// int sqr(int); // Global  declaration 
// // compile does the type checking
 
// int main()
// {
//     int num,result; 

//     printf("Enter the number"); 
//     scanf("%d",&num); 
//     result = sqr(num); 
//     printf("Result = %d",result); 
// }
// // n = 2 
// int sqr(int n)
// {
//     int r; 
//     r = n * n; // 2 * 2 // 4  
//     return r;  // 4 
// } 


// int sqr(int n); // Global  declaration 
// int main()
// {
//     int num,result; 

//     printf("Enter the number"); 
//     scanf("%d",&num); 
//     //int sqr(int n); // local declaration 
//     result = sqr(num); 
//     printf("Result = %d",result); 
// }
// // n = 2 
// int sqr(int n)
// {
//     int r; 
//     r = n * n; // 2 * 2 // 4  
//     return r;  // 4 
// } 




// int main()
// {
//     int num,result; 

//     printf("Enter the number"); 
//     scanf("%d",&num); // 2 
//     result = sqr(num); // function call 
//     printf("Result = %d",result); 
// }

#include<stdio.h> 
int sqr(int n); 
int main()
{
    int num,result; 

    printf("Enter the number"); 
    scanf("%d",&num); // 2 
    result = sqr(num); // function call 
    printf("Result = %d",result); 
}
// function call
// n = 2 
int sqr(int n)
{
    int r; 
    r = n * n; // 2 * 2 // 4  
    return r;  // 4 
} 

// when function is called 
// => function activation record is getting 
// created on stack