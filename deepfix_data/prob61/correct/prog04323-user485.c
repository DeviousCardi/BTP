#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,k,i,j,t=0,oc=0;
    scanf("%d %d",&n,&k);
    int in[n],f[n];
    int *count;
    count= (int*) calloc(k , sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d ",&in[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<k;j++)
        if(in[i]==j+1) {
            count[j]++;
            break; } }
    for(i=0;i<k;i++) {
        oc=count[i];
        count[i]=t;
        t=t+oc; }
    for(i=0;i<n;i++) {
        f[count[in[i]]]=in[i];
        count[in[i]]+=1; }
    return 0; }