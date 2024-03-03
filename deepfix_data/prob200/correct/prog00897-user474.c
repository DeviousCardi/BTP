#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    printf("%d ",upperLimit);
    int i;
    for(i=0;i<n;i++) {
       if(arr[i]==upperLimit) {
           printf("%d\n",upperLimit);
           arr[i]=0; } }
    return 1; }
int main() {
    int n,k,i,max;
    scanf("%d %d ",&n,&k);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]); }
    for(i=0;i<n;i++) {
        arr[i]=ar[i]; }
    for(i=0;i<k;i++) {
        for(i=0;i<n;i++) {
            max=ar[0];
            if(ar[i]>max) {
                max=ar[i]; } }
        getMaxLessThan(max); }
    return 0; }