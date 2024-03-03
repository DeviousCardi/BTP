#include <stdio.h>
#include <stdlib.h>
int main() {
 int i,j,k,n;
 scanf("%d",&n);
 for(i=n/2+1;i>=1;i--) {
     for(j=n;j>=i;j--) {
         printf(" "); }
     for(k=1;k<=i;k++) {
         printf("*"); }
     printf("\n"); }
 for(i=2;i<=n/2;i++) {
     for(j=n;j>=i;j--) {
         printf(" "); }
     for(k=1;k<=2*i-1;k++) {
         printf("*"); }
     printf("\n"); }
	return 0; }