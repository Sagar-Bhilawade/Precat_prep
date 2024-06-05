#include<stdio.h> 

struct book 
{
    int id; //4  
    char name[20];//20  
    char author[20];// 20 
}; 

int main()
{
   struct book b1 = {1,"Cprogram","Ritchie"}; 
   struct book b2;

   // int a = 10
   // int b; 
   // b = a  

   b2 = b1; 
   //printf("%d %s %s",b2.id,b2.name,b2.author);    

    // relational operator cannot be used
    // if(b2==b1)
    //    printf("Same"); 
    // else 
    //    printf("Not same");   


}
