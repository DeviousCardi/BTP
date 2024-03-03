#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0;
    for(int j=l;j<l+r;j++) {
        for(int x=j+1;x<l+r;x++) {
            if(a[x]<a[i]) {
               count++; } } }
    return count; }
int main() {
    int n,k,max=0,num;
    scanf("%d%d",n,k);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n-k;i++) {
       num=getInversions(i,k);
       if(num>max)
       max=num }
    printf("%d",max);
    return 0; }