#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    for(int i=0;i<n;i++) {
        if(arr[i]>max && arr[i]<upperLimit)
        max=arr[i]; }
    return max; }
int main() {
    int k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    int max=0;
    for(int j=0;j<n;j++) {
        if(arr[j]>max)
        max=arr[j]; }
    printf("%d\n",max);
    for(int p=1;p<k;p++) {
        max=getMaxLessThan(max);
        printf("%d\n",max); }
    return 0; }