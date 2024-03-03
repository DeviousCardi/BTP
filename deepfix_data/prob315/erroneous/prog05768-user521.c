#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,count=0,sum=0;
	scanf("%d",&n);
	int A[1000],s[1000];
	for(i=0;i<1000;i++) {
	    scanf("%d",&A[i]); }
	for(i=0;i<n;i++) {
	    count=0;
	    for(j=i+1;j<n;j++) {
	        if(a[j]<a[i]) {
	            count=count+1;
	            count++; } }
	    s[i]=count;
	    sum=sum+count; }
	printf("%d",sum);
	for(i=0;i<n;i++) {
	    printf("%d ",s[i]); }
	return 0; }