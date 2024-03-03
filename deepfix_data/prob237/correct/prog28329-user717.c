#include<stdio.h>
int n,k,i;
int arr[100];
int getInversions(int l,int r) {
    int num,j;
    for(j=l;j<l+k-1;j++) {
        if(arr[i]>arr[j])
        num++; }
    return num; }
int main() {
    int m,max=0;
    scanf("%d\n",&n);
    scanf("%d\n",&k);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    for(i=0;i<n-k+1;i++) {
    m=getInversions(i,k);
    if(m>max)
    max=m; }
     printf("%d",max);
    return 0; }