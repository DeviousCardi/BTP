#include <stdio.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit) {
    int t=0,i,l=0;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>t)
            t=arr[i];
    }l++;
    printf("%d\n",t);
    while(l<=k)
    return getMaxLessThan(t); }
int main() {
    return 0; }