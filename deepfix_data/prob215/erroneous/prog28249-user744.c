#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,count;
	count=0;
	scanf("%d",&n);
	for(i=1;i<n;i=i+1) {
	    if(n%i==0)
	    count=count+i; }
	if(s==count) {
	    printf("YES");
	}else{
	    printf("NO"); }
	    return 0; }