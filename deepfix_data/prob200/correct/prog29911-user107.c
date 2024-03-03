#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,m=0;
    for(i=0;i<n;i++) {
        if (arr[i]>m && arr[i]<upperLimit)
        m=arr[i];
        else if(arr[i]==upperLimit)
        m=upperLimit; }
    for(i=0;i<n;i++) {
        if(arr[i]==m)
        arr[i]=0; }
    return m; }
int main() {
   int k,i,max;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
   max=  getMaxLessThan(100000);
    printf("%d\n",max);
    for(i=1;i<k;i++) {
   max= getMaxLessThan(max);
    printf("%d\n",max); }
    return 0; }