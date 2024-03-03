#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,k,i,j,oc=0;
    scanf("%d %d",&n,&k);
    int in[n],f[n];
    int *count;
    count= (int*) calloc(k , sizeof(int));
    for(i=0;i<n;i++) {
        for(j=0;j<k;j++)
        if(in[i]==j+1)
        count[j]++; }
    for(j=0;j<k;j++) {
        oc=count[j]+oc;
        for(i=0;i<count[j];i++)
        f[i+oc]=j+1; }
    for(i=0;i<n;i++)
    printf("%d",f[i]);
    return 0; }