#include<stdio.h> 

int main()
{
    int i,j,k;

        for(i=1;i<=5;i++) // i =2  2<=5 
        {
            printf("For each i :%d    ",i); //2    
            for(j=1;j<=5;j++)// j =1 1<=5
            {
                 printf("For each j :%d    ",j);
                 for(k=1;k<=5;k++) // k=6 6<=5
                 {
                     printf("k:%d",k);// 12345 
                 }
                 printf("\n\n"); 
            }
            printf("\n\n"); 
        }
     

   
    return 0; 
}
// int main()
// {
//     // nested loops 
//     /*
//             for(step1;step2;step4)
//                  step3
//             for(i=1;i<=5;i++)
//                 printf("%d",i);   
//         i=1 --> only once    
//     */
//     int i,j; 

//         // nested loops 

//         for(i=1;i<=5;i++) // i =6
//         {
//             printf("For each i :%d    ",i); //2    
//             for(j=1;j<=5;j++)//6
//             {
//                 printf("j:%d",j);//12345 
//             }
//             printf("\n\n"); 
//         }
//         /*
//             i==>1 
//                   j=1,2,3,4,5
//             i==>2
//                   j=1,2,3,4,5

//             i==>5              
//                   j=1,2,3,4,5
//         */



//     return 0; 
// }