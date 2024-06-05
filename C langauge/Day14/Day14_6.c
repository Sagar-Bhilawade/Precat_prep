#include<stdio.h> 
void sumpro(int *a, int *b, int *ps, int *pp)
{
 *ps = *a + *b;
 /*
       valueat(100) + valueat(200)
            12      +   4  
 
  *ps --> valueat(ps)
          valueat(300)
    valueat(300) = 12 + 4  
                 = 16        

 */
 *pp = *a * *b;
 /*
        valueat(a) * valueat(b)
        valueat(100 ) * valueat(200)
           12  * 4  
  *pp 
    ---> valueat(pp)
         valueat(400)

    valueat(400) = 12 * 4 
                 = 48  


 */
}
// by using pointers we can return more than one value indirectly 

int main() {
 int x = 12, y = 4, s, p;
 sumpro(&x, &y, &s, &p);
 printf("%d %d", s, p);
 return 0;
}
