#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000],b[10000],i,s,n,x,i1;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n-1;i++) {
	    x=s-a[i];
	    b[i]=a[i];
	    printf("%d\n",s);
	    for(i1=i+1;i1<n;i1++) {
	        if(x==b[i1]) {
	            printf("(%d,%d)\n",x,b[i1]); } } }
	return 0; }