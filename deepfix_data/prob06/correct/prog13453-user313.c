#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100],b[100],n,m,k=0,x,y,i,j;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(b>=a[i]-x && b<=a[i]+y) {
	            k++;
	            break; } } }
	printf("%d\n",k);
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(b>=a[i]-x && b<=a[i]+y) {
	            printf("%d %d\n",i,j);
	            break; } } }
	return 0; }