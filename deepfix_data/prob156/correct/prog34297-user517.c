#include <stdio.h>
int main() {
    int n,m,i,j,k,a;
    scanf("%d %d\n",&n,&m);
    int arr[n];
    for(i=1;i<=n;i++){
        int sum=0;
        for(j=1;j<m;j++){
            scanf("%d ",&a);
            sum=sum+a; }
        sum=arr[i];
        scanf("\n"); }
    int max=arr[1];
    for(k=1;k<n;k++){
        if(arr[k+1]>arr[k])
        max=arr[k+1]; }
    return 0; }