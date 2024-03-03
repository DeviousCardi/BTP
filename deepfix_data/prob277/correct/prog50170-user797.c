#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i=1;
for (i=1;i<=(n+1)/2;i=i+2) {
    int j=1;
    for (j=1;j<=n+1-i;j++) {
        printf("*"); }
    int k=1;
    for (k=1;k<=i-1;k++) {
    printf(" "); }
    printf("\n"); }
return 0; }