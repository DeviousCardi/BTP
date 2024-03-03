#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j;int count=0;int v=0;
	scanf("%d%d%d%d\n",&n,&m,&x,&y);
	 int a[n],b[m],c[v];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(j=0;j<m;j++){
	    scanf("%d",&b[j]); }
	for(j=0;j<m;j++){
	for(i=j;i<n;i++){
	if((a[i]-x<=b[j])&&(b[j]<=a[i]+y)){
	     count++;
	    break; }
	}i--; }
	printf("%d\n",count);
	for(j=0;j<m;j++){
	for(i=j;i<n;i++){
	if((a[i]-x<=b[j])&&(b[j]<=a[i]+y)){
	    printf("%d %d\n",(i+1),(j+1));
	    break; }
	}i--; }
	return 0; }