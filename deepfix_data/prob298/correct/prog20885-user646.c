#include <stdio.h>
#include <stdlib.h>
 int catalan (int n){
     if (n==0)
     return 1;
     if (n==1)
     return 1;
     else
     return 2*(2*n -1)*catalan(n-1)/(n+1); }
int main() {
	int n, i,t,k[100],x=0;
	scanf("%d",&t);
	for (i=0;i<t;i++){
	scanf("%d",&k[i]);
	for(n=0;n<=17;n++){
	    if(n==17) { printf("no\n"); }
	  if(k[i]==catalan(n))
	      printf("yes\n"); } }
	return 0; }