#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
     int i,j,d=0;
     for(i=0;i<n;i++) {
         if(arr[i]>d && arr[i]<upperLimit)
         d=arr[i]; }
     return d; }
int main() {
    int n,k,i,j,d=100000;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    j=getMaxLessThan(d);
    printf("%d\n",j);
    for(i=1;i<k;i++) {
        j=getMaxLessThan(j);
        printf("%d",j); }
    return 0; }