#include<stdio.h> 

int main()
{
    int num = 10; 
    int * const ptr = &num; 
    //int * ptr const = &num;
    //ptr = &num; // ERROR   
//ptr is constant pointer pointing to non constant int variable     
    printf("%d\n",num);
    printf("%d\n",*ptr);

    *ptr = 1000; 
    printf("%d\n",num); // 1000 
    printf("%d\n",*ptr);// 1000 

    //int num2 = 20; 
    //ptr = &num2; //ERROR  


    return 0; 
}
