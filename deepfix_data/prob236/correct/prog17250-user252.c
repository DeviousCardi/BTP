#include <stdio.h>
int main() {
    int bk[100],n,or[100],i,j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&bk[i]);
        if(i==n-1) scanf("\n"); }
    for(i=0;i<n;i++) {
        scanf("%d ",&or[i]);
        if(i==n-1) scanf("\n"); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        if(or[j]==i) {
            printf("%d ",bk[j]);
            break; } } }
    printf("end");
    return 0; }