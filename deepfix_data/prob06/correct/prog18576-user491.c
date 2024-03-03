#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int a[50],b[50];
	int n,m,x,y,i,j,k;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=0;i<n;i++){
	    scanf("%lld ",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%lld ",&b[i]); }
    k=0;
	for(i=0;i<m;j++){
        for(j=k;j<n;i++){
	    if((a[i]-x)<=b[j]&&b[j]<=(a[i]+y)){
	        k++;
	        printf("%d %d\n",i,j); } } }
	printf("%d",k);
	return 0; }