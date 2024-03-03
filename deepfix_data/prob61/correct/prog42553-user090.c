#include<stdio.h>
int main() {
    int n,k,i,j ;
     scanf("%d%d",&n,&k);
    int arr[n],count[k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<k;i++) {
        count[i]=0; }
    for(i=0;i<k;i++) {
        for(j=0;j<n;j++) {
            if(arr[j]==i)
            printf("%d",i); } }
    return 0; }