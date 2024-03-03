#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i=i+1){
	    scanf("%d ",&a[i]); }
	int count=0;
	for(j=0;j<n;j=j+1){
	    for(k=0;k<n;k=k+1){
	    if((a[j])!=(a[n-j])){
	        break;
	      count=count; }
	    else count=count+1; }
	if(count==0){
	    printf("NO"); }
	else{ printf("YES");
}}
	return 0; }