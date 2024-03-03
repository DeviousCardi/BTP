#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,a[10000],i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){scanf("%d",&a[i]);}
	scanf("%d",&s);
	for(i=0;i<n;i++){
	    for(j=i;j<n;j++){
	        if(a[i]+a[j]==s&&i!=j){
	            printf("(%d,%d)",a[i],a[j]); } } }
	return 0; }