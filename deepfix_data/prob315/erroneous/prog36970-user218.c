#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[1000],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	   scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            count++; } } }
	printf("%d",count);
	for(i=0;i<n;i++) {
	    k=0;
	    for(j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            k++;
	            printf("%d ",k); } } }
	return 0; }