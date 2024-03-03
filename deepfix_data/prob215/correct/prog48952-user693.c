#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,m;
	int sum,k=0;
	sum=0;
	scanf("%d",&n);
	int s[j];
	    for(i=1;i<n;i++) {
	        if(n%i==0) {
	           static int k=0;
	           k=k+1;
	            static int j=0;
	            s[j]=i;
	            j++;
	            continue; }
	        else {
	            continue; }
	        if(i==n) {
	            break; } }
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