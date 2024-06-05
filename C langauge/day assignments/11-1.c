#include<stdio.h>
float calculate(int num1,int num2,char op);
int main()
{
  int num1,num2;
  char op;
  printf("Enter the two numbers and operation:");
  scanf("%d%d%*c%c",&num1,&num2,&op);
 float ans= calculate(num1,num2,op);
 if(ans!=0)
 {
 printf("Ans=%f",ans);
 }
 else
 {
     printf("0 cant be in denominator");
 }
 
 return 0;
}
float calculate(int num1,int num2,char op)
{  float ans;
    switch (op)
    {
    case '+':
     ans= num1+num2;
     return ans;
      case '-':
     ans= num1-num2;
     return ans;
      case '*':
     ans= num1*num2;
     return ans;
      case '/':
      if(num2!=0)
      {
     ans= 1.0f*(num1)/num2;
     return ans;
      }
      else
      {
          return 0;
      }
      
      case '%':
     ans= num1%num2;
     return ans;
        
    
    default:
    printf("invalid op");
        break;
    }
}