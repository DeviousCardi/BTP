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
	for(i=0;i<n;i++){
        for(j=k;j<m;j++){
	    if((a[i]-x)<=b[j]&&b[j]<=(a[i]+y)){
	        k++;
	        break; } } }
   printf("%d\n",k);k=0;
	for(i=0;i<n;i++){
        for(j=k;j<m;j++){
	    if((a[i]-x)<=b[j]&&b[j]<=(a[i]+y)){
	        printf("%d %d\n",i+1,j+1);k++;
	        break; } } }
	return 0; }