#include <stdio.h>
#include <stdlib.h>
int main() {
	        int n,i,j=1;
	        scanf("%d",&n);
	        for(i=1;i<n;i++)
	      if((n%i==0)&&(i=n)&&(n=1)) {
	            printf("YES"); }
	        else {
	        printf("NO"); }
	return 0; }