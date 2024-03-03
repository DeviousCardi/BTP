#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,max=0;
    for(i=0;i<n;i++) {
        if(max<arr[i]&&arr[i]!=upperLimit)
        max=arr[i]; }
    return max; }
int main() {
    int k,i,max=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        if(max<arr[i])
        max=arr[i]; }
    printf("%d\n",max);
    for(i=1;i<k;i++) {
        printf("%d\n",getMaxLessThan(max));
        max=getMaxLessThan(max); }
    return 0; }