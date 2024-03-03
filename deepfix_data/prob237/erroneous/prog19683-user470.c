#include<stdio.h>
int arr[100];
int k;
int min(int a,int b){
    if(a>b)
    return b;
    else
    return a; }
int getInversions(int l,int r) {
    int count=0;
    for(int i=1;i<=n;i++){
        scanf("%d ",&a[i]); }
    for(int i=l;i<=l+r-1;i++){
        for(int j=l;j<=l+r-1;j++){
            if(j>i&&a[i]>a[j]){
                count++; } } }
    return count; }
int main() {
    int n;
    scanf("%d\n%d",&n,&k);
    int r[n-k+3];
    for(int i=1;i<=n;i++){
        scanf("%d ",&h[i]); }
    c=getInversions(1,k);
    for(int i=1;i<=n+k-1;i++){
        r[i]=getInversions(i,i+k-1);
        c=max(c,r[i]); }
    printf("%d",c);
    return 0; }