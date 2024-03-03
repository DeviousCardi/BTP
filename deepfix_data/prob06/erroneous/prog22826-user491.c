#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int a[50],b[50],
	int n,m,x,y,i,k,l,m;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=1;i<=n;i++){
	    scanf("%d ",&a[i]); } }
	for(i=0;i<m;i++){
	    scanf("%d "&b[i]); }
	int k=0;
	for(i=1;i<=m;i++){
	    if(a[i]-x<=b[j]||b[j]<=a[i]+y){
	        k++;
	        l=i;m=j;
	        printf("%d %d",l,m); } }
	return 0; }