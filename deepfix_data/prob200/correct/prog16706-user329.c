#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,max;
    max=0;
    for(i=0; i<n; i++) {
            if(arr[i]>max && arr[i]<upperLimit)
                max=arr[i]; }
    return max; }
int main() {
    int k,i,max=0;
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=0; i<n; i++) {
            if(arr[i]>max)
                max=arr[i]; }
    printf("%d",max);
    for(i=1; i<k; i++) {
            max = getMaxLessThan(max);
            printf("\n%d",max); }
    return 0; }