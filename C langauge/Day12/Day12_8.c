#include<stdio.h> 
int main()
{
        register a = 10; 
        {
            register a = 15; 
            printf("%d\n",a);  
        }
        printf("%d\n",a); 
}
// #include<stdio.h> 
// //register int num;//NOT OK 
// int main()
// {
//     register int i; 
//     // storage ==> cpu register ( fast accessible)
//     printf("%d\n",i);  // garbage
//     {
//         register int i = 100; 
//         printf("%d\n",i);//100 
//     }

//     int x; // local/auto --> stack --> process--> RAM
//     register int y; 
//     printf("%u",&x); //address of x 
//     // & --> addressof operator   
//     //printf("%u",&y); //address of y // not OK  

    
     


// }