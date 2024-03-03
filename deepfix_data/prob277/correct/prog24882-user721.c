#include <stdio.h>
#include <stdlib.h>
int main() {
	        int i,j,n;
	        scanf("%d",&n);
	        for (i=1;i<=n;i++){
	                for (j=n; j>=1;j=j-2){
	                    printf("*"); }
	                for (j=1;j<=n;j=j+2){
	                    printf(" * "); } }
	return 0; }