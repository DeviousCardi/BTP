#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,count,total=0,numinv[1000],element[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d ",&element[i]); }
	for(i=0;i<n;i++){
	    count=0;
	    for(j=i+1;j<n;j++){
	        if(element[i]>element[j]){
	            count++; } }
	    numinv[i]=count; }
	for(i=0;i<n;i++){
	    total=total+numinv[i]; }
	printf("%d\n",total);
	for(i=0;i<n;i++){
	    printf("%d ",numinv[i]); }
	return 0; }