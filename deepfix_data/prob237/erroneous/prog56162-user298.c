#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    if (l<=r) {
        for (i=0;i<l;i++) {
            c=arr[i];
            for (j=i;j<(l-r+1);j++) {
                if(c>arr[j]) {
                    count++ } } } } }
int main() {
    int n,k,i,j;
    int c,count;
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++) {
            scanf("%d ",&a[i]) }
    getInversions(n,k);
    return 0; }