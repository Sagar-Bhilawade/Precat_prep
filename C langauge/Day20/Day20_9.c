#include<stdio.h> 
int add(int a , int b); 
int main()
{

    // function pointer 
    
    //int (*ptr)(int); 
 // ptr is pointer to the function that 
 // accepts the int and returns the int   

    int (*ptr1)(int,int) = add; 
  //assigning the address using function designator    

    int (*ptr2)(int,int) = &add; 
 //assigning the address using address of operator    

        //calling the function 
        // dereferencing 
       (*ptr1)(10,20); 

       // calling the function / dereferencing  
       ptr2(2,3);  

    // array of function pointer 
    //int (*arr[4])(int,int); 

    return 0; 
}

int add(int a , int b)
{
    printf("Result = %d",a+b); 
}