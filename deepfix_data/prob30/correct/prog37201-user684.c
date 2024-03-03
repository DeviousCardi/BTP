#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=-1;
    for(int i=0;i<n;i++) {
        if(max<arr[i]&&arr[i]<upperLimit)
            max=arr[i]; }
    return max; }
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
    for(int i=2;i<=k;i++) {
        max=getMaxLessThan(max);
        printf("\n%d",max); }
    return 0; }