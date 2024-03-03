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
    int n,k,i,l,j,d=100000;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    l=getMaxLessThan(d);
    printf("%d\n",l);
    for(i=1;i<k;i++) {
        j=getMaxLessThan(l);
        printf("%d",j); }
    return 0; }