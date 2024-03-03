#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, *t,*a,*b,s=0;
	scanf("%d",&n);
	t = (int*)malloc(n*sizeof(int));
	a = (int*)calloc(n,sizeof(int));
	b = (int*)calloc(n,sizeof(int));
	int i;
	for(i=0;i<n;i++){
	    scanf("%d",&t[i]); }
	for(i=0;i<n;i++){
	    s=s+t[i]; }
	for(i=0;i<n;i++){
	    if (a[i]=>b[i]) {
	        a[i+1]=a[i]+t[i]; } }
	return 0; }