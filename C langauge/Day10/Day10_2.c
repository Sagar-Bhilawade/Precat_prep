#include<stdio.h> 
// function declaration 
double addition( double x , double y); 
void multiplication( double a , double b  ); 
double division(int num , int den); 
void subtract( void );  
int main()
{
    double num1 = 12.00; 
    double num2 = 4.00; 
    double res; 
    int num,den; 

    res = addition( num1 , num2 ); 
    printf("result = %.2lf\n",res);
    res = addition(20.00,5.00 ); 
    printf("result = %.2lf\n",res);

    //function call 
    multiplication(2.0,4.0); 

    printf("Enter the num and den\n"); 
    scanf("%d%d",&num,&den); // 4 2 

    res = division(num ,den); // function call  
    //              4    2 

    printf("result = %.2lf\n",res);

    subtract( ); // function call  

    return 0; 
}
// void ==> no taking any I/P as well as 
// not returning any value 
void subtract( void )
{
    int p,q,r; // variable declaration 
    printf("\nEnter the two numbers"); 
    scanf("%d%d",&p,&q); 
    r = p - q; 
    printf("\nResult = %d",r); 
}



// function defination 
//                   5         2 
double division(int num , int den)
{
        double r; 
        r = (double)num / den; 
        return r;  
}


// calling function ==> main 

// function defination 
double addition( double x , double y)
{
      double res; 
      res = x + y; 
      return res; 
}
// void --> if function is not returning anything 
// then we write it as void 
void multiplication( double a , double b  )
{
        double c; 
        c = a  * b;  
        printf("\nresult = %.2lf\n",c);
 //printing result inside the function 
 // no need to return        
}

 