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
      if(hei>ht) {
          ht=hei; }
      else {
          n=ht-hei; } }
   if(n==0)
   printf("NO");
   else
   printf("YES");
    return 0; }