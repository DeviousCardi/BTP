#include<stdio.h>
int Max(int arr[], int i) {
    int j,m=1;
    for(j=i-1;j>=0;j--) {
        if (Max(arr,j)>m)
            m=Max(arr,j); }
    return m; }
int main() {
    int i,n,max=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        if(Max(a,i)>max)
            max=Max(a,i);
    printf("%d",max);
    return 0; }