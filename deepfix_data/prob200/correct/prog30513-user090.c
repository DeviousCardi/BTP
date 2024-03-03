#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int k=0;
    if(upperLimit>k) {
        k=upperLimit; }
    return (k); }
int main() {
    int n,k,arr[100],l,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        l=getMaxLessThan(arr[i]); }
    printf("%d",l);
    return 0; }