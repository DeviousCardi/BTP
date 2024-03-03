#include <stdio.h>
#include <stdlib.h>
int B(int n) {
    if(n==0)
      return 1;
    else
      return (((4*n-2)*B(n-1))/(n+1)); }
int main() {
    int i,t,x,n=5000,j,flage=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&x);
        for(j=0;j<n;j++){
            if(B(x)>i)
            flage=1; }
        if(flage==1)
       printf("%d\n",B(x)); }
	return 0; }