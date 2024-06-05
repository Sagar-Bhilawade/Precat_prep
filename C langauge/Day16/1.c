#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main()

{
   int m,n;
   m=3+MAX(2,3);
   n=MAX(3,2);
   printf("%d %d",m,n);
}