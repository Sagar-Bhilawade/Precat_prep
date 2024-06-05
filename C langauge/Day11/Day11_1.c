#include<stdio.h> 

/*
        Calculate the combination 

        nCr = n! / ( r! ( n-r)!)

        1. Input n and r 
        2. Calculate n!
        3. Calculate r!
        4. calculate (n-r)! 
        5.Compute n! / ( r! ( n-r)!)
        6.print the result 

        factorial ==> 3

        function ==> 
        I will write function called as Factorial 
        Factorial() // defination 
        {
                //CODE for cal factorial 
        }


*/

// function declaration 
// pass by value / call by value 
int factorial(int n); 
int combination (int n , int r); 
int main()
{   
    int n,r; // 4 4 bytes  
    int res; // 4 bytes 
    printf("Enter the n and r :"); 
    scanf("%d%d",&n,&r); 
    // n =5 r = 2 
    res = combination(n,r); // function call 
    printf("Result = %d",res); 
    return 0; 
}



// function defination 
// function to calculate the factorial 
//               4 bytes
int factorial(int n) // n =3
{
        int i,result = 1; 
        // i and result are local variable to the function factorial 
        for(i=1;i<=n;i++)
           result = result * i;
          
        return result; 
        //6
}


// function defination 
// n =5 r = 2 
//                  4bytes  4 bytes
int combination (int n , int r)
{
        //nCr = n! / ( r! ( n-r)!)
        int nf,rf,nrf,res; 
        // res = 4 bytes 
       
        nf = factorial(n);// factorial(5) //function call 
        rf = factorial(r); //factorial(2) function call
        nrf = factorial( n-r);//factorial(3) // function call    
        res = nf / (rf * nrf);

        return res;  
}

// main ==> combination()==> factorial ()