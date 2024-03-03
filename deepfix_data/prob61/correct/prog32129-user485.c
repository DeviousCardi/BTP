#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,k,i,j,t=1,oc=1;
    scanf("%d %d",&n,&k);
    int in[n+1],f[n+1];
    int *count;
    count= (int*) calloc(k+1 , sizeof(int));
    for(i=1;i<=n;i++)
    scanf("%d ",&in[i]);
    for(i=0;i<n;i++) {
        for(j=1;j<=k;j++)
        if(in[i]==j) {
            count[j]++;
            break; } }
    for(i=1;i<=k;i++) {
        oc=count[i];
        count[i]=t;
        t=t+oc; }
    for(i=1;i<=n;i++) {
        f[count[in[i]]]=in[i];
        count[in[i]]+=1; }
    for(i=1;i<=n;i++)
    printf("%d ",f[i]);
    return 0; }