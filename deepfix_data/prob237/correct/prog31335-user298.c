#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,c=0,count=0;
    if (l<=r) {
        for (i=0;i<l+r;i++) {
            c=arr[i];
            for (j=i;j<(l+r);j++) {
                if(c>arr[j]) {
                    count++; } } } }
    return count; }
int main() {
    int n,k,i,temp=0,r=0;
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++) {
            scanf("%d ",&arr[i]); }
    for(i=1;i<(n-k+1);i++) {
        temp=getInversions(i,k);
        if (r<temp) {
            r=temp; } }
    printf("%d",temp);
    return 0; }