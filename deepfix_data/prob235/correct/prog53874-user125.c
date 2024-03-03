#include <stdio.h>
#include <stdlib.h>
int main() {
 int m,n,i,k,j;
 for(i=1;i<=m;i++){
     for(j=1;j<n;j++){
         printf(" "); } }
 for(k=1;k<=i-1;k++) {
     printf("%d",m-i+k); }
 printf("%d",n);
 for(k=1;k<i;k++) {
     printf("%d",m+k); }
 printf("\n");
 n--;
	return 0; }