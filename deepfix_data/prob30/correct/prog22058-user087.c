#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{ int mlt=arr[0];int i;int j;
  for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
                if(arr[j]>mlt && arr[j]<upperLimit)
                mlt=arr[j]; } }
    if(arr[0]>mlt && arr[0]<upperLimit) {
            mlt=arr[0]; }
    else
    return mlt; }
int main()
{   int i;int k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
            scanf("%d ",&arr[i]); }
    int max=arr[0];
    for(i=1;i<n;i++) {
            if(arr[i]>max)
            max=arr[i]; }
    int b[k];b[0]=max;int r=0;
    for(i=1;i<k;i++) {
            r=getMaxLessThan(b[i-1]);
            b[i]=r; }
    for(i=0;i<k;i++) {
            printf("%d",b[i]);
            printf("\n"); }
    return 0; }