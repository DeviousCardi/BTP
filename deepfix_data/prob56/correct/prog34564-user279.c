#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
	 if(n==0)
	   return 1;
	 else if(n==1)
	   return 1;
	 else {
	     return ((4*n-2)*catalan(n-1))/(n+1); } }
int main() {
    int i,t,n,k,flag;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        flag=0;
        scanf("%d",&n);
        for(k=0;k<n+1;k++) {
            if(n==catalan(k))
              printf("%d\n",catalan(k+1));
              break; } }
    return 0; }