#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,min;
    scanf("%d",&n,&m);
    int arr[m*n];
    int max[m];
    for(i=0;i<m*n;i++) {
        scanf("%d",&arr[i]) }
    for(i=0;i<m;i++) {
        max[m]=-100000;
        for(j=i*n;j<(i+1)*n;j++) {
            scanf("%d",&arr[j]);
            if(arr[j]>max[m])
            max[m]=arr[j]; } }
    for(i=0;i<m-1;i++) {
        if(max[m]>max[m+1])
        min=max[m+1];
        else min=max[m]; }
    printf("%d",min);
    return 0; }