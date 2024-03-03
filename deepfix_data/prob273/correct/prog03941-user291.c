#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n;
    int p=(n-1)/2 +1;
    scanf("%d",&n);
    for(i=1;i<=p;i++) {
        for(k=1;k<=(p-i);k++) {
            printf(" "); }
        for(j=1;j<=i;j++) {
            printf("%d",i); }
        printf("\n"); }
    for(i=(p+1);i<=n;i++) {
        for(k=1;k<=(i-5);k++) {
            printf(" "); }
        for(j=1;j<=(n-i+1);j++) {
            printf("%d",i); }
        printf("\n"); }
	return 0; }