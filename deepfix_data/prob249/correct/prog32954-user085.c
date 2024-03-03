#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++) {
    if (i==0||i==(n-1)) {
        for(j=1;j<=(n-1)/2;j++) {
            printf(" "); }
        printf("*\n"); } }
return 0; }