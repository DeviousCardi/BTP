#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,a[10^5],b[10^5],k=0,j;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=1;i<=n;i++) {
	    scanf("%d ",&a[i]); }
	for(i=1;i<=m;i++) {
	    scanf("%d ",&b[i]); }
	for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
           if(a[i]-x<=b[j] && a[i]+y>=b[j]) {
           k++;
           break; } } }
	printf("%d",k);
	return 0; }