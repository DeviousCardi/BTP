#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j,k,l,m,p;
    p=(n+1)/2;
    for(i=1;i<=p;i++) {
        for(j=1;j<=p-i;j++) {
            printf(" "); }
        for(k=p-i+1;k<=p+i-1;k++) {
            printf("%d",k); }
        printf("\n"); }
    for(i=1;i<=p-1;i++) {
      for(j=1;j<=i;j++) {
         printf(" "); }
      for(k=j+1;k<=n-i;k++) {
          printf("%d",k); }
      printf("\n"); }
	return 0; }