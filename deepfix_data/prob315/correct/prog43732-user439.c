#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,s,j,count=0;
	int a[1000],b[1000];
	s=0;count=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            s=s+1;
	            count=count+1; } }
	    b[i]=s;
	    s=0; }
	printf("%d",count);
	for(i=0;i<n;i++) {
	    printf("%d ",b[i]); }
	return 0; }