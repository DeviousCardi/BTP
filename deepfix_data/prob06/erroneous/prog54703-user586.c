#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,x,y,i,j=0,count=0,k=0;
	scanf("%d%d%d%d%d",&m,&n,&x,&y);
	int a[n],b[m],p[m],q[n];
	for(i=0;i<n;i++) {
	    scanf("%d",a+i); }
	for(i=0;i<m;i++) {
	    if((b[i]>=a[j]-x)&&(b[i]<=a[j]+y)) {
	        p[k]=j+1;
	        q[k]=i+1;
	        i++;
	        j++;
	        k++;
	        count++; }
	    else if(b[i]<a[j]-x) {
	        i++; }
	    else(b[i]>a[i]+y) {
	        j++; } }
	printf("%d\n",count);
	for(k=0;k<count;k++) {
	    printf("%d %d\n",p[k],q[k]); }
	return 0; }