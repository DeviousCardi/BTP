#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 int main() {
    int a,b,i,k=INT_MAX;
      scanf("%d",&a);
    int c[a];
    for(i=0;i<a;i++) {
         scanf("%d",&c[i]); }
      scanf("%d",&b);
    int d[b];
    for(i=0;i<b;i++) {
          scanf("%d",&d[i]); }
    for(i=0;i<a;i++) {
        if(k>c[i])
        k=c[i]; }
	return 0; }