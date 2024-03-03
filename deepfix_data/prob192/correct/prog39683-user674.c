#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i;
for(i=1;i<=(n+1)/2; i++) {
    int j;
    for(j=1; j<=(n+1)/2-i; j++)
    printf(" ");
    for(j=1; j<=2*i-1; j++)
    printf("*"); }
for(i=1;i<=(n-1)/2; i++) {
    int j;
    for(j=1; j<=i; j++)
    printf(" ");
    for(j=1; j<=n-2*i; j++)
    printf("*"); }
	return 0; }