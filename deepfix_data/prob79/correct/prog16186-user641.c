#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, *t,s=0,a=0,b=0,m=0,d=0;
	scanf("%d",&n);
	t = (int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++){
	    scanf("%d",&t[i]); }
	for(i=0;i<n;i++){
	    if (a<=b) {
	        a=a+t[i];
	        m++; }
	    else {
	        b=b+t[n-i];
	        d++;
	    }}
	printf("%d %d",d,m);
	return 0; }