#include <stdio.h>
#include<stdlib.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0,i;
    for(i=0;i<n;i++) {
        if(arr[i]>=upperLimit) {
            continue; }
        if(arr[i]>max) {
            max=arr[i]; } }
    return max; }
int main() {
    int k,upperLimit=MAXINT,i,m;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    m=getMaxLessThan(upperLimit);
    for(i=1;i<=k;i++) {
        printf("%d\n",m);
        m=getMaxLessThan(m); }
    return 0; }