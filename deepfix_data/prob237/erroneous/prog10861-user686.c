#include<stdio.h>
#include<limits.h>
int arr[100];
int getInversions(int l,int r) {
    int c=0;
    for(int i=l;i<l+r-2;i++){
        for(int j=i+1;j<l+r-1;j++){
            if(arr[i]>arr[j])
                c++; } }
    return c; }
int main() {
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int max=INT_MIN;
    for(int i=0;i<n-1-k;i++){
        int temp=getInversions(i,k);
        if(temp>max)
            max=temp; }
    printf("%d",max);
    return 0; }