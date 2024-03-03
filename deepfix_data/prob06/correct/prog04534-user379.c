#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, x, m, y, i, j, total=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int a[n],b[m];
	for(i=0; i<n; i++)scanf("%d",&a[i]);
	for(j=0; j<m; j++)scanf("%d",&b[j]);
	for(i=0; i<n; i++) {
	    for(j=total; j<m; j++) {
	        if((a[i]-x)<=b[j] && b[j]<=(a[i]+y)) {
	        total++;
	        printf("%d\n %d %d", total, i+1, j+1);
	        break; } } }
	return 0; }