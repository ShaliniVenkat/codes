#include <stdio.h>

int main(void) {
    int a;
    scanf("%d",&a);
    if(a==0)
      printf("Zero\n");
    else if(a>0)
      printf("Positive");
    else if(a<0)
       printf("Negative");
	return 0;
}
