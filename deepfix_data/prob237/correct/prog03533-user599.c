#include<stdio.h>
int getInversions(int l,int r);
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0;
    for(i=l;i<l+r-1;i++) {
        for(j=i+1;j<l+r;j++) {
            if(arr[i]>arr[j])
                count++; } }
    return count; }
int main() {
    int n,k,i,inversions[100],max=0;
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=n-k;i++) {
        inversions[i]=getInversions(i,k);
        if(inversions[i]>max)
            max=inversions[i]; }
    printf("%d",max);
    return 0; }