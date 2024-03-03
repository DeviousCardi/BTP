#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	int A[5];
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	scanf("%d",&A[i]);}
	scanf("%d",&j);
	for(j=1;j<=n;j++){
	    if(A[1]==A[5]&&A[2]==A[3]){
	        printf("YES\n");
	        else printf("NO\n"); } } }
	return 0; }