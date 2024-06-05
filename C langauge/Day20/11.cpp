#include <stdio.h>
#include<stdlib.h>
class b
{
  int a;
};
int main( void )
{
   b *p= (b*)malloc(sizeof(b));
   p->a=10;
   printf("%u",*&*&p);

   return 0;
}
