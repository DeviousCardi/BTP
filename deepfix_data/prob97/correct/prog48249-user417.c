#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k;
    int n,count;
    scanf("%d",&n);
    count=1;
    for(i=0;i<n;i++) {
        for(j=1;j<=n-i;j++)
        printf(" ");
        j--;
        for(k=1;k<=count;k++) {
            printf("%d",j%10); }
        count=count+2;
        printf("\n"); }
    return 0; }