#include <stdio.h>
#include <stdlib.h>
int max(int a[], int n) {
    int i,j,p;
    for (i=0;i<n-1;i++) {
        for (j=i+1;j<n;j++) {
            if (a[i]>=a[j])
            p=i; } }
     return p; }
int main() {
	int n;
	int a[10000];
	int c[1000];
	int i,j,count=0,k;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	c[0]=1;
	for (i=1;i<n;i++) {
	    c[i]=1; }
	for (i=0;i<n;i++) {
	    for (j=0;j<n;j++) {
	        if (a[i]==a[j])
	        count++; }
	    c[i]=count; }
	return 0; }