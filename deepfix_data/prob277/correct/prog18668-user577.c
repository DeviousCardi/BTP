#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for (j=1; j<=n; j++) {
    for(i=1; i<(n-(2*i)+3)/2; i++)
    printf(" ");
    for(i=(n-(2*i)+3)/2; i<=(n+(2*i)-1)/2; i++)
    printf("*");
    for(i=(n+(2*i)+1)/2; i<=n; i++) {
    printf(" ");
    printf("/n"); } }
	return 0; }