#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int m=0,i;
    for(i=0;i<upperLimit;i++) {
        if(arr[i]>m)
            m=arr[i]; }
    for(i=0;i<upperLimit;i++) {
        if(m==arr[i])
            break; }
    arr[i]=0;
    return m; }
int main() {
    int k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d ",&arr[i]);
    for(i=0;i<k;i++) {
        k=getMaxLessThan(n);
        printf("%d\n",k); }
    return 0; }