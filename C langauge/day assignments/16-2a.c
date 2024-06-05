#include<stdio.h>
#include<string.h>
int my_strlen(char str[]);
int main()
{
    char str[]={"sagar Bhilawade"};
    printf("machine length=%d\n",strlen(str));
    int len= my_strlen(str);
    printf("my length=%d\n",len);
    return 0;
}
int my_strlen(char str[])
{  int len=0;
   int i=0;
   while(str[i]!='\0')
   {
      len++ ;
      i++;
   }
   return len;

   
}