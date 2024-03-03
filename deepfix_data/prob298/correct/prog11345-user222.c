#include <stdio.h>
#include <stdlib.h>
int catalan(int test,int p,int n) {
   if(p>test) {
       return 0; }
   else if(p==test) {
       return 1; }
   else {
     return  catalan(test,p*2*(2*n+1)/(n+2),n+1); } }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    if(catalan(k,1,1)) {
	        printf("yes\n"); }
	    else
	    printf("no\n"); }
	return 0; }