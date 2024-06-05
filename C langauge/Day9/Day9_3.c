#include<stdio.h> 


int main()
{
    // enum ==> user defined datatype 
    enum color // creating the datatype
    {
        RED=1,BLUE=1,GREEN=2,VIOLET 
    }; 
    int num;
    // num++ --> yes  
    //printf("%d\n",sizeof(num)); // 4
    //printf("%d\n",sizeof(enum color)); // 4 
    enum color c1,c2,c3,c4; 
    //c1,c2,c3 --> variable names  

    c1 = RED;  //0 
    c2 = BLUE; // 1
    c3 = GREEN; //2
    c4 = VIOLET;  //3   

    printf("%d %d %d %d\n",c1,c2,c3,c4); 
    c1++;   // c1 = c1 + 1 //  c1 = 0  + 1  
    c2++;
    c3++;
    c4++; 
    printf("%d %d %d %d",c1,c2,c3,c4); 

    //RED++; //lvalue required as increment operand
    //0++ ==> 0 = 0 + 1 
    // 3 = 2+1 // lvalue error 
    // num = 2 + 1  
    return 0; 
}

// // enum ==> user defined datatype 
// enum color // creating the datatype
// {
//     RED=1,BLUE=1,GREEN=2,VIOLET 
// }; 

// int main()
// {
    
//     int num;
//     // num++ --> yes  
//     //printf("%d\n",sizeof(num)); // 4
//     //printf("%d\n",sizeof(enum color)); // 4 
//     enum color c1,c2,c3,c4; 
//     //c1,c2,c3 --> variable names  

//     c1 = RED;  //0 
//     c2 = BLUE; // 1
//     c3 = GREEN; //2
//     c4 = VIOLET;  //3   

//     printf("%d %d %d %d\n",c1,c2,c3,c4); 
//     c1++;   // c1 = c1 + 1 //  c1 = 0  + 1  
//     c2++;
//     c3++;
//     c4++; 
//     printf("%d %d %d %d",c1,c2,c3,c4); 

//     //RED++; //lvalue required as increment operand
//     //0++ ==> 0 = 0 + 1 
//     // 3 = 2+1 // lvalue error 
//     // num = 2 + 1  
//     return 0; 
// }


// // enum ==> user defined datatype 
// enum color // creating the datatype
// {
//     RED,BLUE=3,GREEN=2,VIOLET 
// }; 

// int main()
// {
    
//     int num;
//     // num++ --> yes  
//     //printf("%d\n",sizeof(num)); // 4
//     //printf("%d\n",sizeof(enum color)); // 4 
//     enum color c1,c2,c3,c4; 
//     //c1,c2,c3 --> variable names  

//     c1 = RED;  //0 
//     c2 = BLUE; // 1
//     c3 = GREEN; //2
//     c4 = VIOLET;  //3   

//     printf("%d %d %d %d\n",c1,c2,c3,c4); 
//     c1++;   // c1 = c1 + 1 //  c1 = 0  + 1  
//     c2++;
//     c3++;
//     c4++; 
//     printf("%d %d %d %d",c1,c2,c3,c4); 

//     //RED++; //lvalue required as increment operand
//     //0++ ==> 0 = 0 + 1 
//     // 3 = 2+1 // lvalue error 
//     // num = 2 + 1  
//     return 0; 
// }

// // enum ==> user defined datatype 
// enum color // creating the datatype
// {
//     RED,BLUE,GREEN,VIOLET 
// }; 

// int main()
// {
//     int num;
//     // num++ --> yes  
//     //printf("%d\n",sizeof(num)); // 4
//     //printf("%d\n",sizeof(enum color)); // 4 
//     enum color c1,c2,c3,c4; 
//     //c1,c2,c3 --> variable names  

//     c1 = RED;  //0 
//     c2 = BLUE; // 1
//     c3 = GREEN; //2
//     c4 = VIOLET;  //3   

//     printf("%d %d %d %d\n",c1,c2,c3,c4); 
//     c1++;   // c1 = c1 + 1 //  c1 = 0  + 1  
//     c2++;
//     c3++;
//     c4++; 
//     printf("%d %d %d %d",c1,c2,c3,c4); 

//     //RED++; //lvalue required as increment operand
//     //0++ ==> 0 = 0 + 1 
//     // 3 = 2+1 // lvalue error 
//     // num = 2 + 1  
//     return 0; 
// }





// enum color // creating the datatype
// {
//     RED,BLUE,GREEN,VIOLET 
// }; 
// //enum constant values by default start from 0 and assigned sequentially
// int main()
// {
//     printf("%d\n",RED); //0 
//     printf("%d\n",BLUE);//1
//     printf("%d\n",GREEN);//2 
//     return 0; 
// }



// enum color // creating the datatype
// {
//     RED,BLUE,GREEN 
// }; 
// int main()
// {
//     // int , float ,double ,char ==> primitive / builtin
//     // int --> int num 
//     // int -->datatype
//     // num --> variable-name
            
//       int i,j,k;// datatype variable-name
//       // int --> datatype 
//       // i,j,k --> variable-name

//       enum color c1,c2,c3;  
//       // enum color --> datatype 
//       // c1,c2,c3--> variable names   
    
//     return 0; 
// }