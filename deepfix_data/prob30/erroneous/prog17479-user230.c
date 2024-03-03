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
        scanf("%d",&arr[i]);
    int max[k];
    max[0]=arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>max[0])
          max[0]=arr[i]; }
    for(i=0;i<k-1;i++) {
        printf("%d\n",&max[i]);
        max[i+1]=getMaxLessThan(max[i]); }
    return 0; }