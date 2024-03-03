#include <stdio.h>
int exchange(int [],int,int);
int main() {
    int n,t1,fp=0,i,r;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&r);
    t1=arr[0];
    if(r>0) {
        for(i=1;i<=n;i++) {
            if(fp+r>=n)
                fp=0+r-(n-fp);
            else
                fp=fp+r;
            t1=exchange(arr,fp,t1); } }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0; }
int exchange(int a[],int fp,int t1) {
    int t2;
    t2=a[fp];
    a[fp]=t1;
    t1=t2;
    return t1; }