#include <stdio.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit) {
    int i,a=0;
    for(i=0;i<n; i++) {
        if((arr[i]>a)&&(arr[i]<=upperLimit))
           a =arr[i]; }
    return a; }
int main() {
    int i,b[100];
    scanf("%d %d",&n,&k);
    printf("%d %d\n",n,k);
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]); }
    for(i=0;i<n;i++) {
        printf("%d",arr[i]); }
    return 0; }