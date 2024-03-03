#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,sold[10000],vest[1000],vest2[1000],i,j,count=0,arr[50][50],i2=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	scanf("%d",&sold[i]);
	for(i=0;i<m;i++){
	scanf("%d",&vest[i]);
	vest2[i]=vest[i];}
	if(n*m==0){
	printf("0");
	return 0;}
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(sold[i]<=vest[j]+y && sold[i]>=vest[j]-x) {
	            arr[i2][0]=i;
	            arr[i2++][1]=j;
	            count++;
	            vest[j]=-100000;
	            break; } } }
	for(i=0;i<i2;i++)
	printf("%d %d\n",arr[i][0],arr[i][1]);
	return 0; }