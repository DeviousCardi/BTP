#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100],b[100],n,m,k=0,x,y,i,j;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(b[j]>=a[i]-x && b[j]<=a[i]+y) {
	            k++; b[j]=-2000; printf("%d ",k); } } }
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(b[j]>=a[i]-x && b[j]<=a[i]+y) {
	            printf("%d %d\n",i+1,j+1);
	            break; } } }
	return 0; }