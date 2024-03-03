#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j;
    int a=0;
    for(j=0;j<n;j++) {
        if(arr[j]>a && arr[j]<= upperLimit)
            a=arr[j]; }
    return arr[j]; }
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int i,j;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max=0;
    for(i=0;i<n;i++) {
        if(max<arr[i])
            max=arr[i]; }
    printf("%d",max);
    for(j=2;j<=n;j++) {
        printf("%d",getMaxLessThan(max));
        max=getMaxLessThan(max); }
    return 0; }