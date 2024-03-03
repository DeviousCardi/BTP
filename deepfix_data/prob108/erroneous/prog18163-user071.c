#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1) {
	    if(i==1||i==n) {
	        print("*"); }
	        for(j=1;j=i-2;j=j+1) {
	            printf(" "); } } }
	return 0; }