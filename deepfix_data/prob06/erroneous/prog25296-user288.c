#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y,i,j;int count=0;
	scanf("%d%d%d%d\n",&n,&m,&x,&y);
	long int a[n],b[m];
	for(i=0;i<n,i++){
	    scanf("%d",&a[i]) }
	for(j=0;j<m,j++){
	    scanf("%d",&b[j]) }
	if(n<0||m<0||<x<0||y<0){
	    printf("error"); }
	for(j=0;j<m,j++){
	for(i=0;i<n,i++){
	if((a[i]-x<=b[j])&&(b[j]<=a[i]+y)){
	    count++;
	    break;
	}} }
	printf("%d\n",count);
	return 0; }