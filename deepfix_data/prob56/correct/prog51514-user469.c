#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    else
    return ((4*n-2)/n+1)*cat(n-1); }
int main() {
    int i,p,m,t;
    scanf("%d\n",&m);
    for(t=1;t<=m;t++) {
    scanf("%d\n",&p);
     for(i=0;i<=10;i++) {
      if(p<cat(i)) {
       printf("%d\n",cat(i));
       break; } } }
      return 0; }