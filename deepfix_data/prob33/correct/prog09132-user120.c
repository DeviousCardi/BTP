#include <stdio.h>
int main() {
   int n;
   scanf("%d\n",&n);
   int p;
   scanf("%d\n",&p);
   int hei;
   int ht=0;
   for(int i=1;i<=p;i++) {
      scanf("%d",&hei);
          n=ht-hei;
          ht=hei; }
   if(n==0)
   printf("No");
   else
   printf("Yes");
    return 0; }