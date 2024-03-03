#include <stdio.h>
int main() {
    int n,i,m;
    int a[50];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	   a[i+1]=a[i]+a[i+1]; }
	printf("%d",a[m]);
	return 0; }