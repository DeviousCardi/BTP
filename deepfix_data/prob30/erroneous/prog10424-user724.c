#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int upperLimit) {
    int j,i,l;
    for(i=0;i<n;i++) {
        for(j=i;j<n-1;j++) {
            if(arr[i]<arr[j+1])
            l=arr[j+1];
            arr[j+1]=arr[i]; } }
    for(j=0;j<upperLimit;j++) { }
return upperLimit; }
int main() {
    int k,i,j,n,max;
    scanf("%d ",&n);
    scanf("%d\n",&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    max=arr[0];
    for(j=0;j<n;j++) {
         if(max<a[j])
         k=a[j];
         max=k; }
        printf("%d",max); }
    for(i=0;i<k;i++) {
        printf("%d\n", getMaxLessThan( max )); }
    return 0; }