#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
	if(n==0)return 1;
	else return n*catalan(n-1); }
int main() {
     int i,t,k,ret;
     scanf("%d",&t);
     for(i=1;i<=t;i++) {
         scanf("%d",&k);
         ret=catalan(k);
         printf("%d",ret); }
     return 0; }