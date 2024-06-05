#include<stdio.h> 
double addition( double x , double y); 
// function declaration 
int main()
{
    double num1 = 12.00; 
    double num2 = 4.00; 
    double res; 

    // num1 and num2 ==> actual arguments 
    res = addition( num1 , num2 ); // function call  
    //              12.00   4.00 
    printf("result = %.2lf\n",res);//16.00      

    res = addition(20.00,5.00 ); //function call

    printf("result = %.2lf\n",res);//25.00      

    return 0; 
}

// addition function will do the addition for me 
// function defination / Implementation
//             12.00       4.00  
// return-type function-name ( formal arguments  ); 
double addition( double x , double y)
{
      double res; 
      res = x + y; // 12.00 + 4.00 // processing   
      return res; // 16.00  
 // i am returning the value of type double 
 // res ==> double 
 // function is returning the value of type double      

}