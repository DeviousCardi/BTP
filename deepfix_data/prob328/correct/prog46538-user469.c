#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int fib(int t){
     if(t<=1)
     return t;
      else
     return fib(t-1)+fib(t-2); }
int main() {
    int m,p,i,j,co=0;
    scanf("%d\n",&m);
    for(i=1;i<=m;i++) {
        scanf("%d",&p);
        for(j=0;j<=19;j++) {
            if(p==fib(j)) {
                co=1;
                break; }
        } printf("%d\n",co);
        if(co!=1) { } }
  return 0; }