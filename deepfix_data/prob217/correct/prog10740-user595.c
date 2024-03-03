#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,i,j,k=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    getchar(); }
	scanf("%d",&s);
	for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j]==s)
            {b[k]=a[i];
             k++; } } }
    for(i=0;i<=k;i++) {
        printf("(%d,%d)\n",b[i],s-b[i]); }
	return 0; }