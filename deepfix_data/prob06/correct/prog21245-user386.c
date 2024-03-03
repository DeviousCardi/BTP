#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,*a,*b;
	int c=0,k=0,i,j;
	int h[20],d[20];
	scanf("%d %d %d %d",&n,&m,&x,&y);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	b=(int*)malloc(sizeof(int)*m);
	for(i=0;i<m;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<n;i++) {
	    for(j=k;j<m;j++) {
	        if(((a[i]-x)<=b[j]) && ((a[i]+y)>=b[j])) {
	            c++;
	            h[k]=i;
	            d[k]=j;
	            k++;
	            break; } } }
	printf("%d\n",c);
	for(i=0;i<k-1;i++) {
	    printf("%d %d\n",h[i],d[i]); }
	return 0; }