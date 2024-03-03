#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max2=-1;
    for(int i=0;i<n;i++) {
        if(arr[i]>max2&&arr[i]<upperLimit)
            max2=arr[i]; }
    return max2; }
int main() {
    int k;
    scanf("%d %d\n",&n,&k);
    scanf("%d ",&arr[0]);
    int max=arr[0];
    for(int i=1;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i]; }
    printf("%d",max);
    for(int i=n;i>0;i++) {
        int tem=getMaxLessThan(i); }
    return 0; }