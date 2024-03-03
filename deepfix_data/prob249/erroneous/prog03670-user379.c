#include <stdio.h>
int main() {
    int n,i,j,s=(n-1)/2;
    scanf("%d",&n);
    for (i=1;i<n;i++) {
        for (s;s<n,s--)
        for (j=1;j<i,j++) {
            printf("*"); }
        printf(" "); }
	return 0; }