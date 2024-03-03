#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,s;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    scanf("%d",&s);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j]==s) {
                printf("(%d,%d",&a[i],a[j]); } } }
	return 0; }