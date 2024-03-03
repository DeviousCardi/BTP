#include <stdio.h>
#include <stdlib.h>
int main() {
    int a=0,b=1,c,t,k,i;
      scanf("%d",&t);
      for(i=0;i<t;i++) {
          scanf("%d",&k);
          while(c<=k) {
          c=a+b;
          a=b;
          b=c;
          if(c==k) {
          printf("yes\n"); }
          else {
              printf("no\n"); } } }
      return 0; }