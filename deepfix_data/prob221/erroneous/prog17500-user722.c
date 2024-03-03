#include <stdio.h>
#include <stdlib.h>
void space( int n) {
    inti=0;
    for(i=0;i<n;i++)
    printf(" "); }
int main() {
    int i,n;
    scanf("%d",&n);
    printf("");
    for(i=1;i<n-1;i++) {
        space(i);
        printf("*");
        space(n-1-i);
        printf("*\n"); }
    space(n-1);printf("*");
	return 0; }