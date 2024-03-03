#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0;
    for(int i=l;i<l+r;i++){
        for(int j=l;j<i;j++){
            if(arr[j]>arr[i])
                count++; } }
    return count; }
int main() {
    int n,k,max=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n-k;i++){
        if(getInversions(i,k)>max)
            max=getInversions(i,k); }
    printf("%d",max);
    return 0; }