
#include <stdio.h>
int main( void )
{
FILE *fp=NULL; char shagi[1024];
fp = fopen("Sunbeam.txt", "a+");
fputs(" BHILAWADE",fp);
//fseek(fp, 0, SEEK_SET);
fseek(fp, 0, SEEK_SET);
fgets(shagi, 16, fp);
puts(shagi);
return 0;
}