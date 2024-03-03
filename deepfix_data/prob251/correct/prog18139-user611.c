#include <stdio.h>
#include <stdlib.h>
int f[10000];
int getways(int n) {
    if(f[n]!=-1) return f[n];
    else {
        f[n]=1;
        return f[n]; } }
int main() {
    int n;
    scanf("%d",&n);
    f[0]=0;
    f[1]=1;
    f[2]=1;
    f[3]=2;
    for(int i=4;i<n;i++) {
        f[i]=-1; }
    getways(n);
    printf("%d",f[n]);
    return 0; }