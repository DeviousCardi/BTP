#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,min;
    scanf("%d%d",&n,&m);
    int arr[m*n];
    int max[m];
    for(i=0;i<m*n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<m;i++) {
        max[m]=-100000;
        for(j=i*n;j<(i+1)*n;j++) {
            scanf("%d",&arr[j]);
            if(arr[j]>max[m])
            max[m]=arr[j]; } }
    for(i=0;i<m-1;i++) {
        if(max[m]>max[m+1])
        max[m]=max[m+1];
        else max[m+1]=max[m]; }
    printf("%d",max[1]);
    return 0; }