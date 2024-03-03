#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,a[100000],b[100000],i;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<m;i++) {
	    scanf("%d",&b[i]); }
    for(i=0;i<count1;i++) {
        for(j=0;j<m;j++) {
            if(b[j]>=(a[i]-x)&&b[j]<(a[i]+x)) } }
	return 0; }