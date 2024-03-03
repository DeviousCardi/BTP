#include<stdio.h>
int getInversions(int l,int r);
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0;
    for(i=l;i<l+r;i++) {
        for(j=i+1;j<l+r;j++) {
            if(arr[i]>arr[j])
                count++; } }
    return count; }
int main() {
    int n,k,i,inversions[100],max_inversions;
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-k;i++)
        inversions[i]=getInversions(i,k);
    for(i=1;i<n-k-1;i++) {
        if(inversions[i]>inversions[i+1])
            max_inversions=inversions[i];
        else
            max_inversions=inversions[i+1]; }
    printf("%d",max_inversions);
    return 0; }