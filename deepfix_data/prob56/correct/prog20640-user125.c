#include <stdio.h>
#include <stdlib.h>
int B(int n) {
    if(n==1||n==0)
      return 1;
    else
      return (((4*n-2)*B(n-1))/(n+1)); }
int main() {
    int i,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&x);
      if(x<B(x))
      printf("%d",B(x)); }
	return 0; }