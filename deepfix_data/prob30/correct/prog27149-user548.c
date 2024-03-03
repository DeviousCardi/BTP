#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i=0;
    int maxf;
    maxf=0;
    while(arr[i]<upperLimit) {
        maxf=(maxf>arr[i]?maxf:arr[i]);
        i++; }
    return(maxf); }
int main() {
    int i,max,k;
    scanf("%d %d",&n,&k);
    int b[k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    max=arr[0];
    for(i=1;i<n;i++) {
        max=(max>arr[i])?max:arr[i]; }
    b[0]=max;
    for(i=1;i<k;i++) {
        b[i]=getMaxLessThan(b[i-1]);
        printf(" %d ",b[i]); }
    printf("@@%d@@",getMaxLessThan(9));
    return 0; }