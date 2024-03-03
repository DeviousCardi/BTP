#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,k,i,j,t=0,oc=0;
    scanf("%d %d",&n,&k);
    int in[n+1],f[n+1];
    int *count;
    count= (int*) calloc(k+1 , sizeof(int));
    for(i=1;i<=n;i++)
    scanf("%d ",&in[i]);
    for(i=1;i<=n;i++) {
        for(j=1;j<=k;j++)
        if(in[i]==j) {
            count[j]++;
            break; } }
    for(i=1;i<=k;i++) {
        oc=count[i];
        count[i]=t+1;
        t=t+oc;
        for(j=count[i];j<total;j++)
        printf("%d",i); }
    return 0; }