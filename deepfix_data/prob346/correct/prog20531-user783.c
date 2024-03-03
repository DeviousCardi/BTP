#include <stdio.h>
int main() {
    int n,i,j,m;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&m);
        arr[i]=m; }
    for(j=1;j<n;j++) {
        for(i=0;i<=99;i++)
        if(arr[j]==i)
        printf("%d ",i); }
    printf("end");
    return 0; }