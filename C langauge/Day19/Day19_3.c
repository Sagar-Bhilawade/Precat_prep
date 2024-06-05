#include<stdio.h> 

// macro 
#define ADD(a,b) (a+b)
#define MULTIPLY(a,b) (a*b)
#define SQR(x)  ((x) * (x))

int main()
{
    printf("add = %d\n",ADD(3,4)); 
    //printf("add = %d\n",(3 +4));

    printf("Multiply = %d\n",MULTIPLY(3,4));
    //printf("add = %d\n",(3*4));

    printf("Multiply = %d\n",MULTIPLY(2+1,3+1));
    //printf("Multiply = %d\n",(2+1*3+1));
    
    printf("add = %d\n",SQR(2+3));
    //printf("add = %d\n",((2+3) * (2+3)));

    return 0; 
}
//gcc Day19_3.c -E -o Day19_3.i