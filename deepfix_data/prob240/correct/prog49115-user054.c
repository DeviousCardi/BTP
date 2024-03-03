#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    else
    return cat(n-1)*2*(n+n-1)/(n+1); }
int main() {
    int t,i,j,a[100],temp;
       scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&a[i]); }
    for(i=0;i<t;i++) {
        for(j=0;j<100;j++) {
          if(a[i]>cat(j))
          break;
          temp=j; }
        printf("%d\n",cat(temp)); }
    return 0; }