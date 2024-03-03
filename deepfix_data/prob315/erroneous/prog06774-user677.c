#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[1000],count[1000],sum=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    count[i]=0; }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            count[i]++; } } }
	for(i=0;i<n;i++) {
	    sum=sum+count[i]; }
	printf("%d\n",sum);
	for(i=0;i<n;i++) {
	    printf("%d ",count[i]); }
	return 0; }