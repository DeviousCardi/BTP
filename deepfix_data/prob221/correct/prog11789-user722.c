#include <stdio.h>
#include <stdlib.h>
void space( int n) {
    int i=0;
    for(i=0;i<n;i++)
    printf(" "); }
int main() {
    int i,n,j;
    scanf("%d",&n);
    for(j=0;j<2*n;j++)
    {   printf("*"); }
    printf("\n");
    for(i=1;i<n-1;i++) {
        space(i);
        printf("*");
        space(n-1-i);
        printf("*\n"); }
    space(n-1);printf("*");
	return 0; }