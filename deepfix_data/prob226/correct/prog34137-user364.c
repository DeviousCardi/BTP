#include <stdio.h>
int main() {
    int n,i,m,sum;
    int a[50];
    sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n-1;i++) {
        a[i+1]=a[i+1]+a[i]; }
    if(n>=2){sum=a[n-2];}
    if(m>=n) {
        for(i=(n-1);i<m;i++) {
       a[i]=a[i]+sum; } }
	printf("%d",a[m-1]);
	return 0; }