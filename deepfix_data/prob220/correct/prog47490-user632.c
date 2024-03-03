#include <stdio.h>
#include <stdlib.h>
int main() {
	         int i,j,h,n;
	         scanf("%d",&h);
	           for(i=1;i<=h-1;i++) {
	           for(j=1;j<=2*h-1;j++) {
	            if(j==(n-1)+(i-1)&&j==(n-1)-(i-1)) {
	            printf("*"); }
	            else {
	            for(j=1;j<=2*h-1;j++) {
	            printf("*"); } } }
	           printf("\n"); }
	return 0; }