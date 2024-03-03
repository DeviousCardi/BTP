#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,c=0;
    for(i=l;i<l+r;i++)
    for(j=i+1;j<l+r;j++) {
        if(arr[j]>arr[i])
        c++; }
    return c; }
int main() {
    int n,k,i,x,max=0;
    scanf("%d",%n);
    scanf("%d",%k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-k+1;i++) {
        x=getInversions(i,k);
        if(x>max)
        max=x; }
    printf("%d",max);
    return 0; }