#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k=0;
	int n,m,x,y;
	int a[256],b[256];
	int at[256],bt[256];
	scanf("%d ",&m);
	scanf("%d ",&n);
	scanf("%d ",&x);
	scanf("%d ",&y);
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