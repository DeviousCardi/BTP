#include <stdio.h>
#include <stdlib.h>
int main() {
   int n;
   scanf("%d",&n);
   int num=0
   int quo=n;
   while(quo>0) {
      rem=quo%10;
      num=(num*10)+rem;
      quo=quo/10; }
   if(num==n)
    printf("YES");
   else
    printf("NO");
	return 0; }