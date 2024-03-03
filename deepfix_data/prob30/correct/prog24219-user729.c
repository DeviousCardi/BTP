#include <stdio.h>
int arr[100]={0};
int n;
int k;
int getMaxLessThan(int upperLimit) {
    int diff,i,maxlt;
    for(i=0; i<n; i++) {
        if(arr[i]<upperLimit) {
            if(diff>(upperLimit-arr[i])) {
                diff=upperLimit-arr[i];
                maxlt=arr[i]; } } }
    return maxlt; }
int main() {
    scanf("%d",&n);
    scanf("%d",&k);
    int i,s;
    int deso[n];
    for(i=0; i<n; i++) {
        scanf("%d",&arr[i]); }
    int max=arr[0];
    for(i=1; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i]; } }
    printf("%d",max);
    deso[0]=max;
    for(i=0; i<k; i++) {
        deso[i]=getMaxLessThan(deso[i-1]); }
    for(i=0; i<k; i++) {
        printf("%d\n",deso[i]); }
    return 0; }