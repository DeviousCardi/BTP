#include <stdio.h>
int arr[100]={0};
int n;
static int m=0;
int getMaxLessThan(int upperLimit) {
    for(i=0;i<n;i++) {
        if (arr[i]>m && arr[i]<=upperlimit)
        m=arr[i]; }
    printf("%d",m);
   arr[i]=0; }
int main() {
   int k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]); }
    for(i=0;i<k;i++)
    getMaxLessThan(1000);
    return 0; }