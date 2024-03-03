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
    int N,k,x[100],l[100],i,max;
    scanf("%d%d",&N,&k);
     n=N;
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]);
        arr[i]=x[i]; }
    int c=x[0] ;
    for(i=0;i<N;i++) {
        if(x[i]>c) {
            c=x[i];
            max=x[i]; }
        l[0]=max;
    }for(i=1;i<k;i++) {
        l[i]=getMaxLessThan(l[i-1]); }
    printf("%d\n",max);
    for(i=0;i<k;i++) {
        printf("%d\n",l[i]); }
    return 0; }