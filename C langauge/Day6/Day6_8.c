#include<stdio.h> 

int main()
{

    // // relational operator
    // // > , < , >= , <= , == , != 
    // // != --> not equal to 
    // // == --> relational operator 
    // // = --> assignment operator 

    // // relational oper -->  output --> 0 or 1 

    // // 0 --> False 
    // // 1 --> true 

    // // any nonzero is considered as true ( -ve )
    // // 0 --> false 

    // printf("%d\n",10>20); // false --> 0 
    // // 10 > 20 --> false --> 0 
    // printf("%d\n",30>20);// True --> 1 
    // // 30 > 20 --> true --> 1 
    // printf("%d\n",30>=20);// True --> 1
    // // >= --> greater than or equal to 

    // printf("%d\n",9==9);// True --> 1 
    // // 9==9 --> true --> 1 

    // printf("%d\n",9==-9);// false 
    // // 9==-9 --> false --> 0 

    // printf("%d\n",10!=10); // 0 
    // // != --> not equal to 
    // printf("%d\n",10!=11); // 1

    // printf("%d\n",3>=3); // 1 

    // ! --> logical negation

    // non-zero ( negative )  ---> true 
    // zero --> false 

    //printf("%d",!100);
    // 100 --> non zero --> true 
    // !true --> false 
    // false -- > 0 

    //printf("%d",!-100);
    // -100 --> non zero --> true 
    // !true --> 0 

    //printf("%d",!0);// 1 

    printf("%d",!!-22); 
    // ! !T -->  ! F --> T --> 1 


    return 0; 
}