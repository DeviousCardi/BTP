#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    int c[k+1];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        c[a[i]]+=1; }
    int temp;
    int total=0;
    for(int i=0;i<k+1;i++) {
        int old=c[i];
        c[i]=total;
        total+=old; }
    int o[n];
    for(int i=0;i<(k+1);i++) { } }