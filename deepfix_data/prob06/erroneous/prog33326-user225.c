#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,q,r,count,m,n,x,y,*a,*b;
	scanf("%d%d%d%d",&m,&n,&x,&y);
	a=(int*)malloc(m*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	for(i=0;i<m;i++) {
	    scanf("%d",a+i); }
	for(i=0;i<n;i++) {
	    scanf("%d",b+i); }
	count=0;
	for(i=0;i<m;i++) {
	    for(j=0;j<n;j++) {
	        if( (*a+i)>=(*b+j)-x && (*a+i)<=(*b+j)+y) {
	            count++;
	            c[q]=i;
	            d[r]=j;
	            q++;
	            r++; } } }
	return 0; }