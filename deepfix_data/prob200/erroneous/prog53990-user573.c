#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int upperLimit) {
   int i,jtemp;
   for(i=0;i<n-1;i++) {
       for(j=i+1;j<n;j++) {
           if(arr[i]<arr[j]) {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp; } } }
   for(i=0;i<n-1;i++) {
        if(upperlimit==arr[i])
        return arr[i+1]; } }
int main()
{ int m,i,k,large;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    large=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>large)
        large=arr[i]; }
    m=large;
    for(i=0;i<k;i++) {
        printf("%d",m);
        m= getMaxLessThan(m); }
    return 0; }