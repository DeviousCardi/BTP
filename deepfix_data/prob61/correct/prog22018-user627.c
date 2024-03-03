#include<stdio.h>
#include<stdlib.h>
int main() {
    int *a,n,k,*count,oldCount,total=0,i,j,l=0,*output;
    scanf("%d%d",&n,&k);
    a=(int *)malloc(n*sizeof(int));
    count=(int *)malloc(k*sizeof(int));
    output=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<k;i++) {
        count[i]=0; }
    for(i=0;i<n;i++) {
        count[a[i]]+=1; }
    for(i=0;i<k;i++) {
        printf("%d ",count[i]); }
    printf("\n");
    for(i=0;i<k;i++) {
        for(j=0;j<count[i];j++) {
            output[l]=a[i];
            l++; } }
    for(i=0;i<n;i++) {
        printf("%d ",output[i]); }
    return 0; }