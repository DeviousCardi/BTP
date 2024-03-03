#include <stdio.h>
#include <stdlib.h>
int main() {
    int catalan(int t);
    int n,i,t,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        catalan(t);
        printf("%d\n",k); }
	return 0; }
int catalan(int t) {
    int n,x;
   if(t==0)
   return 1;
   else {
       x=catalan(t-1);
       n=catalan(2*(2*t-1))/(t+1)*x;
       return n; } }