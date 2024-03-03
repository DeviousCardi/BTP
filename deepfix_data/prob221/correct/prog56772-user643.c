#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=1;j<=2*n-1;j=j+1){
	       for(k=1;k<=2;k=k+1){
	           for(m=1;m<=1;m=m+1){
	               printf("%c",'*'); }
	          printf("%c",'*') ;
	          printf("%c",'*'); }
	       printf("*"); }
	     printf("\n"); }
	return 0; }