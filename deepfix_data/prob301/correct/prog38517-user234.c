#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
           if(a[i]==a[i+1]) {
            printf("%d",a[i]); } }
    if(n==1) {
        printf("%d",n); }
	return 0; }