#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,count=0,sum=0,j;
	scanf("%d",&n);
	int a[1000],s[1000];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    count=0;
	    for(j=i+1;j<n;j++) {
	        if(a[j]<a[i]) {
	            count=count+1;
	            continue; } }
	    s[i]=count;
	    sum=sum+count; }
	printf("%d",sum);
	for(i=0;i<n;i++) {
	    printf("%d ",s[i]); }
	return 0; }