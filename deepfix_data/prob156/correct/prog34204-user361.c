#include <stdio.h>
int main() {
    int n,m,i,j,max=0,sum=0;
    int arr[10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[j]); } }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum=sum+arr[j];
            if(max>sum){
                max=sum; } } }
    printf("%d",max);
    return 0; }