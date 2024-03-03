#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
     int l;int max=0;
     for(l=0;l<n;l++) {
            if(arr[l]<upperLimit && arr[l]>max) {
                    max=arr[l]; } }
        return max; }
int main() {
    int n,k;int i;
    scanf("%d",&n);
    scanf("%d\n",&k);
    for(i=0;i<n;i++) {
            scanf("%d ",&arr[i]); }
        int b[k];
        b[0]=getMaxLessThan(100000);
        for(i=1;i<k;i++) {
                b[i]=getMaxLessThan(b[i-1]); }
        for(i=0;i<k;i++) {
                printf("%d\n",b[i]); }
            printf("%d",arr[0]);
    return 0; }