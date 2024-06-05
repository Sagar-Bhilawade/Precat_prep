#include<stdio.h> 
#pragma pack(1)

struct test
{
    int a; // 4 
    char b; // 1 
    double d1; // 8 
    int c;  // 4    
};


int main()
{
    printf("%d",sizeof(struct test));//8  
    return 0; 
}

// struct test
// {
//     int a; // 4 
//     char b;// 1 
//     int c; // 4    
// };

// int main()
// {
//     printf("%d",sizeof(struct test));//8  
//     return 0; 
// }

// struct test
// {
//     int a; // 4 
//     char b;// 1 
    
// };

// int main()
// {
//     printf("%d",sizeof(struct test));//8  
//     return 0; 
// }


