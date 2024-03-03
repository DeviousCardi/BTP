#include <stdio.h>
int main() {
    int n,m,i,k;
    scanf("%d",&n,&m)
    int gold[m];
    for(k=0;k<m;k++) {
        gold[k]=0; }
    for(k=0;k<n;k++) {
        for(j=0;j<m;j++) {
            scanf("%d",&i);
            gold[j]=gold[j]+i; } }
    for(k=0;k<m;k++) {
        for(j=0;j<m;j++)
        if(gold[j]<=gold[k])
        gold[j]=gold[k]; }
    printf("%d",gold[0]);
     return 0; }