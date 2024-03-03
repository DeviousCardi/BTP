#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int temp;
    int k,d=0;
    while (temp!=0) {
        k = temp%10;
        d = d+k;
        temp = temp%10; }
      for (i = n+1;;i++) {
          if(i%d==0) {
              scanf("%d",&i);
              break; } }
      printf("%d",i);
     return 0; }