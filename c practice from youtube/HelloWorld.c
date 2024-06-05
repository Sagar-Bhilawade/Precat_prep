#include <stdio.h>
int main(void)
{
int a,b,c,d;
a=232336;
d=printf("\n a = %d",a);
printf("%d",d);
a=printf("\t \"SunBeam\" - \t'IT Park' \t");
b=printf("\t \'Pune\' \t");
c=printf("\n a = %d",a)+ ++b;
printf(" c = %d",c);
return 0;
}