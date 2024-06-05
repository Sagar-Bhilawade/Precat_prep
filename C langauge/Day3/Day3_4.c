#include<stdio.h> 

int main()
{
    // printf prints data/string on terminal

    // string --> "Hello world"
    // data --> integer,char,double 

    // i want to print 10 on terminal 
    // 10 --> data --> int 
    /*
            format specifier 
            10 --> integer format 
            %d --> decimal integer       

    */
       printf("%d ",10);

    // What is i want to print 'A' on terminal
    // 'A' --> character 
    // character --> %c   

       printf("%c ",'A'); 

    // What if i want to print 10.33 on terminal 
    // 10.33 --> %lf 
    // double --> 10.33 --> %lf

       printf("%lf ",10.33);        

    // i have printed 10,'A',10.33 on terminal 
    // i used format specifier 
    // 10 --> int --> %d
    // 'A' -->char -->%c
    // 10.33 --> double --> %lf  
     
    return 0; 
}
// printf 
// printf --> printf is used to print data/string
// 10 'A' 10.33 