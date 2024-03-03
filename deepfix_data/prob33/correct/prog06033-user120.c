#include <stdio.h>
int main() {
   int n;
   scanf("%d\n",&n);
   int p;
   scanf("%d\n",&p);
   int h,a;
   int ht=0;
   for(int i=1;i<=p;i++) {
      scanf("%d",&h,&a);
          if(ht>h) {
              n=n-ht-h; }
          else
          ht=h; }
   if(n==0)
   printf("No");
   else
   printf("Yes");
    return 0; }