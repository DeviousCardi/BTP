#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,k,n;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i=i+1){
	    scanf("%d ",&a[i]); }
	int count=0;
	    for(k=0;k<n;k=k+1){
	    if((a[k])==(a[n-k])){
	        count=count+1;}
	        else count=count; }
     if(count<(n+1)/2){
	    printf("NO"); }
	else{ printf("YES"); }
	return 0; }