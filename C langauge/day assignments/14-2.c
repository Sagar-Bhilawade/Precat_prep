#include<stdio.h>
int divide(int numerator, int denominator, int *quotient, int *remainder);
int main()
{
    int num,den,q,r;
    printf("Enter numrator and denomnator:");
    scanf("%d%d",&num,&den);
    int value=divide(num,den,&q,&r);
    if(value!=0)
    printf("quotient=%d remainder=%d",q,r);
    else
    {
        printf("0 cant be in the denomenator");
    }
    
    return 0;
}
int divide(int numerator, int denominator, int *quotient, int *remainder)
{ if(denominator==0)
  return 0;
  else
  {
      *quotient=numerator/denominator;
      *remainder=numerator%denominator;
      return 1;
  }
  

}