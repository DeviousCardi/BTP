#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,x,y,i,j,k,count=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int a[n],b[m],a1[m],b1[m];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<m;j++) {
	  scanf("%d",&b[j]) }
	i=0;j=0;k=0;
	for(i=0;i<m;) {
	    if((b[i]>=a[j]-x)&&(b[i]<=a[j]+y)) {
	        a1[k]=i+1;
	        b1[k]=j+1;
	        i++;
	        j++;
	        k++;
	        count++; }
	    else if(b[i]<a[j]-x) {
	       i++; }
	     else
	       j++; }
	printf("%d",count);
	for(k=0;k<count;k++) {
	    printf("%d %d",a1[k],b1[k]); }
	return 0; }