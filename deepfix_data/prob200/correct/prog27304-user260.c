#include <stdio.h>
int arr[100]={0};
int t,n,k;
int getMaxLessThan(int upperLimit) {
    int j;
    t=0;
    for(j=0;j<n;j++) {
        if(arr[j]<=upperLimit && arr[j]>t)
            t=arr[j]; }
    return t; }
int main() {
    int i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++) {
      getMaxLessThan(100000);
      printf("%d\n",t);
     for(i=0;i<n;i++) {
         if(arr[i]==t)
         arr[i]=0; } }
    return 0; }