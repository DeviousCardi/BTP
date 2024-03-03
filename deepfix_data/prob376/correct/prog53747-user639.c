#include <stdio.h>
#include <stdlib.h>
long cat(int n){
    int k,i;
    if(n<2)
      return 1;
    else{
        for(i=0;i<n;i++)
        k=k+cat(i)*cat(n-i-1);
        return k; } }
int main() {
	int t,i,k;
	long ans;
	scanf("%d\n",&t);
	  for(i=0;i<t;i++){
	    scanf("%d\n",&k);
	    ans=cat(k);
	    printf("%lu",ans); }
	return 0; }