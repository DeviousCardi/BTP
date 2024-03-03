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
	    s=s+t[i]; }
	for(i=0;i<n,a+b<=s;i++){
	    if (a<=b) {
	        a=a+t[i];
	        m++; }
	    if(b<=a) {
	        b=b+t[n-i];
	        d++;
	    }}
	printf("%d %d",m-1,d-1);
	return 0; }