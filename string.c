#include <stdio.h>

int main()
{
   char a[100];	 
  int i;
  int n,l;
  scanf("%s",a);
  for(i=strlen(a)-1;i>=0;i--)
    printf("%c",a[i]);
  return 0;
}
