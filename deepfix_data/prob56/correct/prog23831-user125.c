#include <stdio.h>
#include <stdlib.h>
int B(int n) {
    if(n==0)
      return 1;
    else
      return (((4*n-2)*B(n-1))/(n+1)); }
int main() {
    int i,t,x,n=5000,j;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&x);
        for(j=0;j<n;j++) {
            if(B(j)>x) {
                printf("%d\n",B(j));
                break; } } }
	return 0; }