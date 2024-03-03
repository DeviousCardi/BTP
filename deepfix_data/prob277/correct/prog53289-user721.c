#include <stdio.h>
#include <stdlib.h>
int main() {
	        int i,j,n,a;
	        int k=0, l=0,b=0;
	        scanf("%d",&n);
	        for (i=n;i>=1;i=i-2){
	            while (k<l){
	                printf(" ");
	               k++; }
	            k=0;
	            l++;
	            for (j=i;j>=1;j--){
	                printf("*"); }
	            printf("\n"); }
	                for (a=3;a<=n;a=a+2) {
	            for (b=a;b>=1;b--){
	                printf("*"); }
	                    printf("\n"); }
	return 0; }