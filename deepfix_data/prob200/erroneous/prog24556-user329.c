#include <stdio.h>
int arr[100]={0};
int n;
scanf("%d",&n);
for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);
int getMaxLessThan(int upperLimit) {
    int i,max;
    max=arr[0]
    for(i=0; i<n; i++) {
            if(arr[i]>max && arr[i]<=upperLimit)
                max=arr[i]; } }
int main() {
    int k,i,max=0;
    max=arr[0];
    for(i=0; i<n; i++) {
            if(arr[i]>max)
                max=arr[i]; }
    printf("%d",max);
    for(i=1; i<k; i++) {
            max = getMaxLessThan(max);
            printf("\n%d",max); }
    return 0; }