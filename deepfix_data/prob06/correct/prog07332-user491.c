#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int a[50],b[50];
	int n,m,x,y,i,j,k,p,q;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=1;i<=n;i++){
	    scanf("%d ",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%d ",&b[i]); }
    k=0;
	for(j=1;j<=n;j++){
        for(i=1;i<=m;i++){
	    if(a[i]-x<=b[j]||b[j]<=a[i]+y){
	        k++;
	        p=i;q=j;
	        printf("%d %d",p,q); } } }
	return 0; }