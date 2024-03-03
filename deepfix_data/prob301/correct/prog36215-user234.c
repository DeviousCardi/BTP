#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10000],i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[i]==a[j]) {
            printf("%d",a[i]); } } }
    if(n==1) {
        printf("%d",n); }
	return 0; }