#include <stdio.h>
#include <stdlib.h>
int B(int n) {
    if(n==0)
      return 1;
    else
      return (2*(2*n-1)*B(n-1))/(n+1); }
int main() {
    int i,t,x=5000;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&x);
        printf("%d\n",B(x+1)); }
	return 0; }