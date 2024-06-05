#include<stdio.h> 

int main()
{
    // , --> comma operator 
    //int a = 1,2,3;// NOT OK // compiler error 

      int a; // variable declaration 

      //a = 1;  //assignment 
       //a = 1,2,3;   // a =1 
       //a = (1,2,3);   // a =3 
       a = ((1,2),3);   // a =3 
       //  (( 1,2),3 )
       //     ( 2 , 3 )
       //       3  
      printf("%d",a);  

    return 0; 
}