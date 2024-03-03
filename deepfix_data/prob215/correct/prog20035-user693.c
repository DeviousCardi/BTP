#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,j=0;
	int sum,k;
	sum=0;
	scanf("%d",&n);
	int s[j];
	    for(i=1;i<n;i++) {
	        if(n%i==0) {
	           static int k=0;
	           k=k+1;
	            s[j]=i;
	            j++;
	            continue; }
	        else {
	            continue; } }
	    for(m=0;m<k;m++) {
	        sum=sum+s[m];
	        if(m<k) {
	            continue; }
	        if(sum==n) {
	            printf("Yes");
	            break; }
	        else {
	            printf("No");
	            break; } }
	return 0; }