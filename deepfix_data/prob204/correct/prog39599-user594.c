#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,l;
	int a[10000];
	i=0;
	scanf("%d",&a[0]);
	while((a[i]<=9)&&(a[i]>=0)){
	scanf("%d",&a[i]);
	i++; }
	n=i;
	for(l=0;l<=n/2;l++){
	    if(a[l]==a[n-l]){
	        j=1;}
	    else{
	        j=0;break;} }
	if(j==1)
	    printf("YES");
	else if(j==0)
	    printf("NO");
	return 0; }