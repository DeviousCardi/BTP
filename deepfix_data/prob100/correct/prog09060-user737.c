#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    int arr[m*n];
    int max[m];
    for(i=0;i<m;i++) {
        for(j=i*n;j<(i+1)*n;j++) {
            scanf("%d",&arr[j]); }
        max[i]=arr[i*n];
    for(k=i*n;k<(i+1)*n;k++) {
        if(arr[k]>=max[i])
        max[i]=arr[k]; } }
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++) {
            if(max[j]>=max[i])
            max[j]=max[i]; } }
    printf("%d",max[m-1]);
    return 0; }