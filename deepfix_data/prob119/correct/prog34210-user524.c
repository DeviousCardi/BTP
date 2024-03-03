#include <stdio.h>
#include <stdlib.h>
  int p(int k){
  if(k==1)
  return 1;
  return 2*p(k-1); }
int main() {
	int t,n,i,j;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&n);
	    int sum=0;
	   for(j=0;j<n;j++){
	   sum= sum+p(n-1);}
	    printf("%d\n",sum); }
	return 0; }