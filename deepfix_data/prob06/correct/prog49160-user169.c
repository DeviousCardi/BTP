#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,count=0;
	int a[100],b[100],fob[100],flag[100];
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	scanf("%d",&a[i]);
	flag[i]=0; }
	for(j=0;j<m;j++) {
	scanf("%d",&b[j]);
	fob[j]=0; }
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(a[i]-x<b[j]&&b[j]<a[i]+y) {
	            fob[j]++;
	            flag[i]=1; } } }
	for(i=0;i<m;i++) {
	    if(fob[i]!=0)
	    count++; }
	printf("%d\n",count);
	for(i=0;i<m;i++) {
	    if(flag[i]!=0)
	    printf("%d %d\n",i+1,b[i]); }
	return 0; }