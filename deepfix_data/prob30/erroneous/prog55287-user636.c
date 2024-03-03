#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int p=0;
    for(i=0;i<n;i++) {
        if(arr[i]<upperlimit&&p<arr[i])
        p=arr[i]; }
    return p; }
int main() {
    int k,i,l,a;
    a=99999;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    l=getMaxLessThan(a);
    printf("%d",l);
    a=l;
    for(i=0;i<k-1;i++) {
        l=getMaxLessThan(a);
        printf("%d",l);
        a=l; }
    return 0; }