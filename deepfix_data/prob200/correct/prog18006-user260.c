#include <stdio.h>
int arr[100]={0};
int t,n,k,j=0;
int getMaxLessThan(int upperLimit) {
    int i,h;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>t)
            t=arr[i];h=i;
    }arr[h]=0;printf("%d",&t);
    return t; }
int main() {
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++)
    getMaxLessThan(100000);
    return 0; }