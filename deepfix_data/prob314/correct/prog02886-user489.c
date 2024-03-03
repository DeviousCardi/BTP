#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	int t;
	scanf("%d",&t);
	 if(n==1)
	   { printf("Yes");}
	 else {
	int b[t],j,k,l,m;
	for(j=0;j<t;j++) {
	    scanf("%d",&b[j]);
	        k=b[j]-1;
	        l=b[j]+1;
	        m=b[j];
	        if(m!=0&&m!=(n-1)) {
    	    if(a[k]>a[m]&&a[l]>a[m]) {
    	        printf("Yes\n"); }
    	    else {
    	        printf("No\n"); } }
	    else {
	        if(m==0) {
	            if(a[l]>a[m]) {
	                printf("Yes\n"); }
	            else {
	                printf("No\n"); } }
	        else {
	            if(a[m]<a[k]) {
	                printf("Yes"); }
	            else {
	                printf("No"); } } } } }
	return 0; }