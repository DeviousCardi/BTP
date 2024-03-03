#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int k=0,i;
    for(i=0;i<upperLimit;i++) {
         if(arr[i]>k)
         k=arr[i]; }
    return (k); }
int main() {
    int n,k,x[100],l,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]);
        arr[i]=x[i]; }
    l=getMaxLessThan(n);
    printf("%d",l);
    return 0; }