#include <stdio.h>
#include <stdlib.h>
int main() {
    int catalan(int t);
    int n,i,t,k,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        if(k>0) {
            for(j=0;j<100;j++) {
                k=catalan(j);
                if(k>t)
                break; }
            printf("%d\n",k; }
        else
        printf("1"); }
	return 0; }
int catalan(int t) {
    int x,n;
   if(t==0)
   return 1;
   else {
       x=catalan(t-1);
       n=(2*(2*t+1)/(t+2))*x;
    return n; } }