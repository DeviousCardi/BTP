#include <stdio.h>
int arr[100]={0};
int n;
int k,w;
int getMaxLessThan(int upperLimit) {
    int i;
    int max=arr[0];
    if(max<upperLimit) {
        for(i=0;i<n;i++) {
            if(arr[i]>max)
            max=arr[i]; } }
    return max; }
int main() {
    int i,j,c[100],max;
    scanf("%d %d",&n,&k);
    int arr[100];
    max=arr[0];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i]; } }
    printf("%d",max);
    return 0; }