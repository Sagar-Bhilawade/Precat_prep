#include<stdio.h> 

int main()
{
    int num1=100; 
    int num2=20; 
    int num3=300; 

    int max; 

    //condition ? expression1 : expression2

max = num1 > num2 ? ( num1 > num3 ? num1 : num3) : ( num2 > num3 ? num2 :num3);   

    printf("%d",max);     
return 0; 
}









// int main()
// {
//     int a=100;
//     int b=12; 
//     int max; 
//     // if(a>b)
//     //    max = a; 
//     // else 
//     //   max =  b; 

//     // printf("%d",max);   

//     //condition ? expression1 : expression2

            
//     max = a   >   b   ?   a   :   b ; 
//     //        condt   ?  exp1 :  exp2
//     printf("max = %d",max);   

//     return 0; 
// }