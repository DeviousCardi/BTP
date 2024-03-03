#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    int c[k+1];
    for(int i=0;i<k+1;i++)
    c[i]=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        c[a[i]]+=1; }
    int o[n];int j=0;
    for(int i=0;i<(k+1);i++) {
        if(c[i]!=0) {
            for(int k=0;k<c[i];k++) {
                o[j]=i; } } }
    for(int i=0;i<n;i++)
    printf("%d",o[i]); }