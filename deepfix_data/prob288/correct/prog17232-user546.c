#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1) {
       if(i<=n/2) {
           for(i=1;i<=n/2;i=i+1) {
               printf(" "); } }
       else {
           for(i=1;i>=n/2;i=i+1) {
               printf(" "); } }
       for(j=1;j<=i;j=j+1) {
           printf("%d",j); }
       printf("\n"); }
	return 0; }