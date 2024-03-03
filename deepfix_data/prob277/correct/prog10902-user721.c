#include <stdio.h>
#include <stdlib.h>
int main() {
	        int i,j,n;
	        int k=0;
	        scanf("%d",&n);
	        for (i=1;i<=n;i++){
	            while (k>=1){
	                printf(" ");
	                k++; }
	            for (j=n;j>=1;j=j-2){
	                printf("*"); }
	            printf("\n"); }
	return 0; }