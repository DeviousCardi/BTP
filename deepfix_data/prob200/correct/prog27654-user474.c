#include <stdio.h>
int arr[100]={0};
int n;
void getMaxLessThan(int upperLimit) {
    int i;
    for(i=0;i<n;i++) {
       if(arr[i]==upperLimit) {
           printf("%d\n",upperLimit);
           arr[i]=-1; } } }
int main() {
    int m,k,i,j,l,max;
    scanf("%d %d ",&m,&k);
    n=m;
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&ar[i]); }
    for(i=0;i<n;i++) {
        arr[i]=ar[i]; }
    for(i=0;i<k;i++) {
        max=-1;
        for(j=0;j<n;j++) {
            for(l=j+1;l<n;l++) {
                if(ar[j]<ar[l]) {
                    max=ar[j];
                    ar[j]=ar[l];
                    ar[l]=max; } } }
        getMaxLessThan(ar[i]); }
    return 0; }