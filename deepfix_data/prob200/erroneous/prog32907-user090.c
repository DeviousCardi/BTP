#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int m=0,i;
    for(i=0;i<n;i++)
    {     if(arr[i]<upperLimit) {
              if(arr[i]>m)
               m=arr[i]; } }
    return (m); }
int main() {
    int N,k,x[100],l,i,max;
    scanf("%d%d",&N,&k);
     n=N;
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]);
        arr[i]=x[i]; }
    int c=x[0]
    for(i=0;i<N;i++) {
        if(x[i]>c) {
            c=x[i];
            max=x[i]; }
    }printf("%d",max)
    return 0; }