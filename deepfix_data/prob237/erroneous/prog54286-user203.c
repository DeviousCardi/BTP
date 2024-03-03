#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0;
    for(int i=l;i<=(l+r-1);i++) {
        if((l+1)<=(l+r-1)) {
            if(arr[l]>arr[l+1])
            count=count+1; } } }
int main() {
    int n,k;
    scanf("%d\n %d",&n,&k);
    for(int i=0;i<n;i+=) {
        scanf("%d",arr[i]); }
    for(int i=0;i<n;i++) {
        printf("%d",getInversions(i,k)); }
    return 0; }