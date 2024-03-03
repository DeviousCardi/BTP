#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k=0;
	int n,m,x,y;
	int a[200],b[200];
	int at[200],bt[200];
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=1;i<=n;i++) {
	    scanf("%d",&a[i]); }
	for(j=1;j<=m;j++) {
	    scanf("%d",&b[j]); }
	int count=0;
	for(i=1;i<=n;i++) {
	    for(j=k+1;j<=m;j++) {
	        if(a[i]>=(b[j]-x)&&a[i]<=(b[j]+y)){
	            count++;
	            at[k]=i;
	            bt[k]=j;
	            k++;
	            break; } } }
printf("%d\n",count);
for(i=0;i<k;i++) {
    printf("%d %d\n",at[i],bt[j]); }
	return 0; }