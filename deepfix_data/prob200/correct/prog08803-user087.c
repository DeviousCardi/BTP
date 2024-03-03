#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
     int max=0;int i;
     for(i=0;i<n;i++) {
            if(arr[i]<upperLimit && arr[i]>max) {
                    max=arr[i]; } }
        return max; }
int main() {
    int n,k;int i;
    scanf("%d %d\n",&n,&k);int arr[n];
    for(i=0;i<n;i++) {
            scanf("%d ",&arr[i]); }
        int b[k];
        b[0]=getMaxLessThan(10000);
        for(i=1;i<n;i++) {
                b[i]=getMaxLessThan(b[i-1]); }
        for(i=0;i<n;i++) {
                printf("%d\n",b[i]); }
    return 0; }