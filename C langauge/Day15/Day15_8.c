#include<stdio.h> 

int main()
{
    const int num = 10; 
    const int num2 =20; 

    //const int *ptr = &num;
    //int const *ptr = &num;  
     const int const *ptr = &num;  
//ptr is non constant pointer pointing to constant integer variable 

    printf("%d\n",num);// 10
    printf("%d\n",*ptr);// 10 

    //*ptr = 100; NOT OK  

    ptr = &num2; 
    printf("%d\n",num2);// 10
    printf("%d\n",*ptr);// 10 



    return 0; 
}