#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a;
    int k,d=0;
    while (a!=0) {
        k = a%10;
        d = d+k;
        d++; }
      for (i = n+1;;i++) {
          if(i%d==0)
      printf("%d",i); }
     return 0; }