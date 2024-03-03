#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    static int count=0;
    for(int i=l;i<l+r;i++) {
        for(int j=i;j<l+r;j++) {
            if(arr[i]>arr[j])
            count++; } }
    return(count); }
int main() {
int n,k;
scanf("%d %d",&n,&k);
int max,m=0;
for(int i=0;i<n-k;i++) {
    max=getInversions(i,k);
    if(max>m)
    m=max; }
printf("%d",m);
    return 0; }