#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, x, m, y, i, j, o=0, total=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int a[n],b[m],l[n],p[m];
	for(i=0; i<n; i++)scanf("%d",&a[i]);
	for(j=0; j<m; j++)scanf("%d",&b[j]);
	for(i=0; i<n; i++) {
	    for(j=total; j<m; j++) {
	        if((a[i]-x)<=b[j] && b[j]<=(a[i]+y)) {
	        l[o]=i+1;
	        p[o]=j+1;
	        total++;
	        o++;
	        break; } } }
	printf("%d",total);
	for(i=0; i<n; i++) {
	   printf("%d %d\n", l[i], p[i]); }
	return 0; }