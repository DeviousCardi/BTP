#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<upperlimit) {
            if(arr[i]>max)
                max=arr[i]; } }
    return max; }
int main() {
    int k,max,upperlimit;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[]); }
    upperlimit=0;
    for(i=0;i<n;i++) {
        if(arr[i]>upperlimit)
            upperlimit=arr[i]; }
    printf("%d\n",upperlimit);
    for(i=0;i<k-1;i++) {
        max=getMaxLessThan(upperlimit);
        printf("%d\n",max);
        upperlimit=max; }
    return 0; }