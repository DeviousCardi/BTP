#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int m=0,i;
    for(i=0;i<n;i++) {
        if(arr[i]>m && arr[i]<upperLimit)
        m=arr[i]; }
    return m; }
int main() {
    int k,i,j,l;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    j=getMaxLessThan(1000);
    printf("%d",j);
    for(i=1;i<k;i++) {
        l=getMaxLessThan(j);
        printf("%d\n",l); }
    return 0; }