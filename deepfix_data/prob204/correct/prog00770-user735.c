#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, i, j, k;
    scanf("%d", &a);
    j=0;
    k=a;
    while(a!=0)
    { i=a%10;
      j=j*10+i;
      a=a/10; }
    printf("%d", j);
    if(k==j)
     printf("YES");
    else
     printf("NO");
	return 0; }