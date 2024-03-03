#include <stdio.h>
int main() {
    int n,m,i,k,j;
    scanf("%d%d",&n,&m);
    int gold[n];
    for(k=0;k<n;k++) {
        gold[k]=0; }
    for(k=0;k<n;k++) {
        for(j=0;j<m;j++) {
            scanf("%d",&i);
            gold[k]=gold[k]+i; } }
    for(k=0;k<n;k++) {
        for(j=0;j<n;j++)
        if(gold[j]<=gold[k])
        gold[j]=gold[k]; }
    printf("%d",gold[0]);
     return 0; }