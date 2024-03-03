#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i=0;
    int max=0;
    for(i=0;i<n;i++) {
        if((arr[i])>max)&&(arr[i]<upperLimit)) {
            max=arr[i]; } }
    return max; }
int main() {
    int k,m,l;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    m=0;
    for(int i=0;i<n;i++) {
         if(arr[i]>m) {
             m=arr[i]; } }
    for(int i=0;i<k;i++) {
       l=getMaxLessThan(m);
       printf("%d",l); }
    return 0; }