#include <stdio.h>
#include <stdlib.h>
int B(int n) {
    if(n==0)
      return 1;
    else
      return (2*(2*n-1)*B(n-1))/(n+1); }
int main() {
    int n,i,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&x);
        printf("%d",B(n+1)); }
	return 0; }