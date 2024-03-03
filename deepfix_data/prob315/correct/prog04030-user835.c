#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1,i,j,k,sum,a[1000];
    int t=0;
    sum=0;
	scanf("%d",&num1);
	for(i=0;i<num1;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<num1;j++) {
	    for(k=0;k<num1;k++) {
	        if(j<k&&a[j]>a[k]) {
	            sum=sum+1;
	            t=sum; }
	        else {
	            continue; } }
	    printf("%d ",t); }
	printf("%d",t);
	return 0; }