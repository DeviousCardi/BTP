#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int arr[m*n];
    int max[m];
    for(i=0;i<m;i++) {
        max[m]=-1000;
        for(j=i*n;j<(i+1)*n;j++) {
            scanf("%d",&arr[j]);
            if(arr[j]>max[m])
            max[m]=arr[j]; } }
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++) {
            if(max[j]>=max[i])
            max[j]=max[i]; } }
    printf("%d",max[m-1]);
    return 0; }