#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[n],b[m],n,m,x,y,i,j,k=0,c[n],d[n],count=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<m;j++) {
	    scanf("%d",&b[j]); }
	i=0;j=0;
	while(i<n && j<m) {
	    if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)) {
	        c[k]=i+1;
	        d[k]=j+1;
	        i++;j++;k++;
	        count++: }
	    if(b[j]<a[i]-x) {
	        i++; }
	    else (b[j]>a[i]+y) {
	        j++; } }
	printf("%d\n",count);
	for(k=0;k<count;k++) {
	    printf("%d %d\n",c[k],d[k]); }
	return 0; }