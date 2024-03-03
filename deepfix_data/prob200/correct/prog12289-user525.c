#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int l=arr[0];
    int i;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>l)
        l=arr[i]; }
    return l; }
int main() {
     int k,i;
     scanf("%d %d",&n,&k);
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     int w=arr[0];
     for(i=0;i<n;i++)
     if(w<=arr[i])
     w=arr[i];
     for(i=0;i<k;i++) {
        w=getMaxLessThan(w);
        printf("%d\n",w); }
    return 0; }