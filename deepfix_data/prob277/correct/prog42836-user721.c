#include <stdio.h>
#include <stdlib.h>
int main() {
	        int i,j,n;
	        int k=0,l=0;
	        scanf("%d",&n);
	        for (i=n;i>=1;i=i-2){
	            while (k<l){
	                printf(" "); }
	            l++;
	            for (j=i;j>=1;j--){
	                printf("*"); }
	            printf("\n"); }
	return 0; }