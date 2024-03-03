#include <stdio.h>
int ascending(long arr[],int n) {
    int i,j;
    long b;
    for(i=0;i<n;i++) {
        b=arr[i];
        for(j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                arr[i]=arr[j];
                arr[j]=b;
                b=arr[i]; } } }
    return 0; }
int main() {
    int n,i;
    long arr[200000],ans2;
    double ans1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%ld",&arr[i]); }
    ascending(arr,n);
    if(n%2==0) {
        ans1=(double)((arr[n/2]+arr[(n/2)-1])/2);
        printf("%.1lf",ans1); }
    else {
        ans2=arr[(n+1)/2];
        printf("%ld",ans2); }
    return 0; }