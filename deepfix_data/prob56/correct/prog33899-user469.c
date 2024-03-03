#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 0;
    else
    return (2*(2*n-1)/n+1)*cat(n-1); }
int main() {
    int i,p,m,t;
    scanf("%d\n",&m);
    for(t=1;t<=m;t++) {
    scanf("%d\n",&p);
     for(i=0;i<=10;i++) {
      if(p<cat(i)) printf("%d\n",i); {
       printf("%d\n",cat(0));
       break; } } }
      return 0; }