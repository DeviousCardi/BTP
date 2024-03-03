#include <stdio.h>
void swap(int a,int b) {
    int t;
    t=a;
    a=b;
    b=t; }
int fn(int a[],int n,int k) {
    int i,j,cnt=0;
    for(i=0;i<n-1;i++) {
        for(j=1;j<n;j++) {
            if(a[i]>=a[j])
            cnt++; }
        if(cnt==n-1)
        swap(a,a+n-1);
        fn(a+1,n-1,k); }
    return a[k-1]; }
int main() {
    int n,k,j,ans;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(j=0;j<n;j++)
    scanf("%d ",&a[j]);
    ans=fn(a,n,k);
    printf("%d",ans);
    return 0; }