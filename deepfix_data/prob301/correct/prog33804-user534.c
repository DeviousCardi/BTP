#include <stdio.h>
#include <stdlib.h>
int max(int a[], int n) {
    int i,j,p;
    for (i=0;i<n-1;i++) {
        for (j=i+1;j<n;j++) {
            if (a[i]>=a[j])
            p=i;
            else p=j; } }
    return p; }
int main() {
	int n,a[10000],c[10000],i,j,count=0,k;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for (i=0;i<n;i++) {
	    c[i]=1; }
	for (i=0;i<n;i++) {
	    for (j=0;j<n;j++) {
	        if (a[i]==a[j])
	        count++; }
	    c[i]=count; }
    k=max(c[i],n);
    printf("%d",a[k]);
	return 0; }