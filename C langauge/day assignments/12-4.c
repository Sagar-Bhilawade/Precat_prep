#include<stdio.h>
int rep_char(int n,char ch);
int main()
{
    int n;char ch;
    printf("Enter the char and no of times that you wanna print: ");
    scanf("%c%d",&ch,&n);
    rep_char(n,ch);
    return 0;
}
int rep_char(int n,char ch)
{
    if(n==0)
    return 0;
    printf("%4c",ch);
    rep_char(n-1,ch);
}