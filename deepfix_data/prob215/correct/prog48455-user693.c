#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j=0;
	int sum,k;
	sum=0;
	scanf("%d",&n);
	int s[j];
	for(j=0;j<n;j++) {
	    for(i=1;i<n;i++) {
	        if(n%i==0) {
	            s[j]=i;
	            j++;
	            continue; }
	        else {
	            continue; } }
	    for(k=0;k<n;k++) {
	        sum=sum+s[k];
	        if(sum==n) {
	            printf("Yes"); }
	        else {
	            printf("No"); } } }
	return 0; }