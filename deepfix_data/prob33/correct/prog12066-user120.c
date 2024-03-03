#include <stdio.h>
int main() {
   int n;
   scanf("%d\n",&n);
   int p;
   scanf("%d\n",&p);
   int h,a;
   int ht=0;
   scanf("%d",&ht);
   for(int i=1;i<p;i++) {
      scanf("%d",&h);
          if(ht>h) {
              n=n-(ht-h); }
          h=ht; }
   if(n==0)
   printf("No");
   else
   printf("Yes");
    return 0; }