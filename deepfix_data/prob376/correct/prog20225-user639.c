#include <stdio.h>
#include <stdlib.h>
long cat(int n){
    int i;
    long s=0;
    if(n<2)
      return 1;
    else {
        for(i=0;i<n;i++)
            s=s+cat(i)*cat(n-i-1);
        return s; } }
int main() {
	int t,i;
	long ans,k;
	   scanf("%d\n",&t);
	      for(i=0;i<t;i++) {
	         scanf("%lu\n",&k);
	         ans=cat(k);
	         printf("%lu\n",ans); }
	return 0; }