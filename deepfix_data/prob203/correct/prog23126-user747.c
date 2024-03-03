#include <stdio.h>
int main() {
	int a[50],n,i,j,k;
	int count=0;
	scanf("%d\n",n);
	for(i=0;i<n;i++){
	    scanf("%d ",a[i]); }
	for(j=0;j<n;j++){
	    for(k=0;k<n;k++){
	        if(a[j]==a[k]){
	            count=count+1; } } }
	if(count>0){
	    printf("YES\n"); }
	else
	    printf("NO\n");
	return 0; }