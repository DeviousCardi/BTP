#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,p=1,k=0,i,j;
	int a[10^9],b[10^9];
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=1;i<=n;i++)
	scanf("%d ",&a[i]);
	for(i=1;i<=m;i++)
	scanf("%d ",&b[i]);
	for(i=1;i<=n;i++) {
	    for(j=p;j<=m;j++) {
	        if(a[i]-x<=b[j] && a[i]+y>=b[j]) {
	        p=j+1;
	        k++;
	        printf("%d %d\n",i,j);
	        break; } } }
	 printf("%d\n",k);
	 p=1;
	for(i=1;i<=n;i++) {
	    for(j=p;j<=m;j++) {
	        if(a[i]-x<=b[j] && a[i]+y>=b[j]) {
	        printf("%d %d\n",i,j);
	        p=j+1;
	        break; } } }
	return 0; }