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
     int w;
     scanf("%d %d",&n,&k);
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     for(i=0;i<k;i++) {
        w=getMaxLessThan(w);
        printf("%d",w); }
    return 0; }