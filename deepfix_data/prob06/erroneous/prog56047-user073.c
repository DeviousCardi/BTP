#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	int i,j;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	 int *a;
	 a=(int*)malloc(sizeof(int*)*n);
	 for(i=0;i<n;i++) {
	     scanf("%d",a+i); }
	 int*b;
	 b=(int*)malloc(sizeof(int*)*m);
	 for(i=0;i<m;i++) {
	     scanf("%d",b+i); }
	 int k=0;
	 for(k=0;k<n;k++) {
	     for(j=0;j<m;j++) {
	         if(b[j]==-999999999) {
	             continue; }
	         else if(a[k]>=(b j]-x)&&a[k]<=(b[j]+y)) {
	                printf("%d %d\n",k,j);
	                b[j]=-999999999;
	                k++;
	                break; } } }
	return 0; }