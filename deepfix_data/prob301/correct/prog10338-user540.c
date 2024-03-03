#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,a[10000] ;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	if(n==1){
	    printf("%d",a[0]); }
	else{
	    for(i=0;i<n;i++) {
	        for(j=0;j<n;j++){
	            if(a[i]==a[j])
	            printf("%d",a[i]); } } }
	return 0; }