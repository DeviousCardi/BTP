#include <stdio.h>
#include <stdlib.h>
int sum(int k,int a[]) {
    int i,sum1=0;
    for(i=0;i<k;i++) {
        sum1=sum1+a[i]; }
    return sum1; }
int main() {
    int i,sum1=0,n,k1=0,k2=0;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++) {
        scanf("%d",&c[i]);
        sum1=sum1+a[i];
        a[i]=c[i];
        b[n-1-i]=c[i]; }
    printf("%d",sum1);
    printf("%d %d",k1,k2);
	return 0; }