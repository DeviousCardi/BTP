#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int upperLimit) {
    int p,j,lmax,x;
    lmax=0;
    for(j=0;j<n;j++) {
        if(arr[j]<upperLimit  ) {
            if(arr[j]>lmax) {
                p=lmax;
                lmax=arr[j]; } } }
return lmax; }
int main() {
    int k,i,p,j,n,max;
    scanf("%d ",&n);
    scanf("%d\n",&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    max=arr[0];
    for(j=0;j<n;j++) {
         if(max<arr[j]) {
            p=arr[j];
            max=p; } }
    for(i=0;i<k;i++) {
        printf("%d\n", getMaxLessThan(max)); } }