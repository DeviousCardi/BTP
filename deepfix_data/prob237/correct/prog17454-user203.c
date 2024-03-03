#include<stdio.h>
int arr[100];
int n,k;
int main() {
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int r=-99999;
    int count=0;
    for(int j=0;j<(n-k+1);j++) {
        count=count+getInversions(j,k);
        if(r<count) {
            r=count; } }
    printf("%d",r);
    return 0; }
int getInversions(int l,int r) {
    int count=0;
    for(int i=l;i<=(l+r-1);i++) {
        count=0;
        if(i+1<=(l+r-1)) {
            if(arr[i]>arr[i+1]) {
                int t=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=t;
                count=count+1; } }
        return count; } }