#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j,n,k,i;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    int max=0;
    for(j=0;j<n;j++)
    {printf("%d",arr[j]);
        if(arr[j]>max) {
            max=arr[j]; }
    }printf("%d",max);
    getMaxLessThan(max); }
int main() {
    return 0; }