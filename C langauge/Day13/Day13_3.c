#include<stdio.h> 


void sumpro(int a, int b, int *ps, int *pp) 
{
    *ps = a + b;
    *pp = a * b;
    
}

int main() {
 int x = 12, y = 4;
 int *s, *p;
 sumpro(x, y, &s, &p);
 printf("%d %d", s, p);
 return 0;
}
