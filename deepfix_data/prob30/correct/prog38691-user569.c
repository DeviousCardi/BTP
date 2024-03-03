#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    int i;
    for(i=0;i<n;i++) {
        if(max<upperLimit) {
            if(max<arr[i]) max=arr[i]; } }
    return max; }
int main() {
    int k;
    scanf("%d",&n);
    scanf("%d",&k);
    int mx=0;
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        if(mx<arr[i]) mx = arr[i]; }
    printf("%d\n",mx);
    for(i=1;i<k;i++) {
        mx = getMaxLessThan(1);
        printf("%d\n",mx); } }