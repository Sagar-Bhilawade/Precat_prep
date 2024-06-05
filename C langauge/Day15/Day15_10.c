#include<stdio.h> 

int main()
{
    const int num2 = 20; 
    const int num = 10; 
    const int * const ptr =&num; 
    //const int const * const ptr =&num;
    //const int const * const ptr const =&num;//NOT OK   
//ptr is constant pointer pointing to constant int variable     

    printf("%d\n",num);// 10 
    printf("%d\n",*ptr); //10

    //*ptr = 200; //NOT OK  

    //ptr = &num2;//NOT OK    

}
/*
     
        



*/