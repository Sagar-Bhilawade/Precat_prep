#include<stdio.h> 
// i/p a single digit number from user and print it nin words

int main()
{
    char numbers[6] ={"zero","One","two","three","Four","Five"};//6*4 = 24    
    //                  0      1     2     3       4      5 
    int num; 
   // printf("sizeof(numbers)=%d\n",sizeof(numbers));//24
    char *ptr=numbers;
    ptr++;
    printf("%s",ptr);
   // printf("Enter the single digit number");
   // scanf("%d",&num); //0  
    //printf("%s\n",numbers[num]);
    //numbers[0]--> *(numbers + 0 )    
    return 0; 
}   

