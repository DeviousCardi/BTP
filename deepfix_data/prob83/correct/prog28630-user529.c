#include <stdio.h>
int main() {
    int n,t1,t2,fp=0,i,r;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&r);
    t1=arr[0];
    for(i=1;i<=n+2;i++) {
        if(fp+r>=n)
            fp=0+(n-1-fp);
        else
            fp=fp+r;
        t2=arr[fp];
        arr[fp]=t1;
        t1=t2; }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0; }