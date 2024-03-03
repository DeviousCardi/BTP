#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max2=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<upperLimit) {
            if(arr[i]>max2) {
                max2=arr[i]; } } }
    return max2; }
int main() {
    int k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int max=0;
    for (int i=0;i<n;i++) {
        if (arr[i]>max) {
            max=arr[i]; } }
    for(int i=1;i<=k;i++) {
        printf("%d\n",max);
        max=getMaxLessThan(max); }
    return 0; }