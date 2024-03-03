#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,count;
	int a[100],b[100],count1[100];
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<m;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if((a[i]-x<=b[j])&&(b[j]<=a[i]+y)) {
	            count1[i]++;
	            break; } }
	    count+=count1[i]; }
	printf("%d",count);
	return 0; }