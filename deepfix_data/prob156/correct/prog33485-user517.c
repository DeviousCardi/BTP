#include <stdio.h>
int main() {
    int n,m,i,j,k,a;
    scanf("%d %d\n",&n,&m);
    int arr[n];
    for(i=1;i<=n;i++){
        int sum=0;
        for(j=1;j<=m;j++){
            scanf("%d ",&a);
            sum=sum+a; }
        sum=arr[i-1];
        scanf("\n"); }
    printf("%d",arr[0]);
    return 0;
    int max=arr[1];
    for(k=0;k<n-1;k++){
        if(arr[k+1]>arr[k])
        max=arr[k+1]; }
    printf("%d",max);
    return 0; }