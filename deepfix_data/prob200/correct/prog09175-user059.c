#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
     int i,d=0;
     for(i=0;i<n;i++) {
         if(arr[i]>d && arr[i]<upperLimit)
         d=arr[i]; }
     return d; }
int main() {
    int n,k,i,j,d=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    d=getMaxLessThan(100000);
    printf("%d\n",d);
    for(i=1;i<k;i++) {
        j=getMaxLessThan(d);
        printf("%d",j);
        j=d; }
    return 0; }