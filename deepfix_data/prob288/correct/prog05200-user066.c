#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int k,i,j,m;
    scanf("%d",&n);
    for(k=1;k<=2*n+1;k++) {
        j=1;
        for(i=1;i<=n-j;i++) {
        printf(" "); }
        for(m=1;m<=j;m++) {
            if(m%2==0)
            printf("x");
            else
            printf("*"); } }
	return 0; }