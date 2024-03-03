#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,p=0,k=0;
	int a[10^9],b[10^9];
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	scanf("%d",siz[i]);
	for(i=0;i<m;i++)
	scanf("%d",av[i]);
	for(i=0;i<n;i++) {
	    for(j=p;j<m;j++) {
	        if(a[i]-x<=b[j] && a[i]+y>=b[j]) {
	        p=j+1;
	        k++; } } }
	 printf("%d\n",k);
	 p=0;
	for(i=0;i<n;i++) {
	    for(j=p;j<m;j++) {
	        if(a[i]-x<=b[j] && a[i]+y>=b[j]) {
	        p=j+1;
	        printf("%d %d\n",i,j); } } }
	return 0; }