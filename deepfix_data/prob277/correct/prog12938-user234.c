#include <stdio.h>
#include <stdlib.h>
int main() {
 int i,j,k,n;
 scanf("%d",&n);
 for(i=n;i>=1;i--) {
     for(j=n;j>=i;j--) {
         printf(" "); }
     for(k=1;k<=2*i-1;k=k+2) {
         printf("*"); }
     printf("\n"); }
 for(i=2;i<=n;i++) {
     for(j=n;j>=i;j--) {
         printf(" "); }
     for(k=1;k<=2*i-1;k++) {
         printf("*"); }
     printf("\n"); }
	return 0; }