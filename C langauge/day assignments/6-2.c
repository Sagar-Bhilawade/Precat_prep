#include<stdio.h>
int main()
{
    printf("1.celsius to farhenheit\n2.farhenheit to celcius");
    int choice;
    float c,f;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
      printf("enter the value");
      scanf("%f",&c);
      f=9*c/5 +32;
      printf("%f",f);
       break;
    case 2:
     printf("enter the value");
      scanf("%f",&f);
      c= 5*(f-32)/9 ;
      printf("%f",c);

    default:
        break;
    }
}