#include<stdio.h>
#include<string.h>
void my_strrev(char str[]);
int main()
{
    char str[]={"sagar"};
    printf("machine rev=%s\n",strrev(str));
   // printf("%s\n",str);
   my_strrev(str);
   printf("My rev=%s\n",str);

}
void my_strrev(char str[])
{
    int i,len;
    char temp;
    len=strlen(str);
    for (int i = 0; i < len/2; i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;

    }
    
}