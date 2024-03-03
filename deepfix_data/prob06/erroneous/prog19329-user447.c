#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,m,n,x,y,total=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int a[n],b[m],c[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<m;i++) scanf("%d",&b[i]);
	for(i=0,i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(a[i]>b[j]-x &&a[i]<b[j]+x) {
	            total++;
	            c[i]=j;
	            break; } } }
	printf("%d",total);
	for(i=0;i<n;i++) {
	    if(c[i]!=0) printf("%d %d\n",i,c[i]); }
	return 0; }