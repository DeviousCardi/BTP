#include <stdio.h>
#include <stdlib.h>
int cat(int k) {
    if(k==0)
    return 1;
    int i=0,t=0;
    for(i=0;i<k;i++) {
        t=t+cat(i)*cat(k-i-1); }
    return t; }
int main() {
    int r,k,i,j=0;
    scanf("%d",&r);
    for(i=0;i<r;i++) {
        scanf("%d\n",&k);
        for(j=0;j<=k;j++) {
            if((cat(j))>(k)) {
                printf("%d\n",cat(j));
                break; } } }
    return 0; }