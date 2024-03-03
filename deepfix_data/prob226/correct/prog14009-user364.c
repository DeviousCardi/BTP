#include <stdio.h>
int main() {
    int n,i,m,sum;
    int a[50];
    sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n-1;i++) {
        a[i+1]=a[i+1]+a[i]; }
    sum=a[n-1];
    for(i=(n);i<m;i++) {
       a[i]=a[i]+sum; }
	printf("%d",a[m]);
	return 0; }