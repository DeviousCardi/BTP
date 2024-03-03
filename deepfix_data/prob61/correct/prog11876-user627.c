#include<stdio.h>
#include<stdlib.h>
int main() {
    int **a,n,k,**count,oldCount,total=0,i,j,l=0,**output;
    scanf("%d%d",&n,&k);
    a=(int **)malloc(n*sizeof(int *));
    count=(int **)malloc(k*sizeof(int *));
    output=(int **)malloc(n*sizeof(int *));
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }