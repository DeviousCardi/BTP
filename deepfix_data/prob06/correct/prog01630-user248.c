#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,a[100],b[100],count=0,c[100],d[100],l=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<m;j++) {
	    scanf("%d",&b[j]); }
    for(i=0;i<n;i++) {
        for(j=l;j<m;j++) {
            if(a[i]>=b[j]-x && a[i]<=b[j]+y) {
                count=count+1;
                c[l]=i+1;
                d[l]=j+1;
                l++; }
            break; } }
    printf("%d\n",count);
    for(i=0;i<l;i++) {
        printf("%d %d\n",c[i],d[i]); }
	return 0; }