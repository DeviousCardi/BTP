#include <stdio.h>
int arr[100]={0};
int t,n,k;
int getMaxLessThan(int upperLimit) {
    int i;
    t=0;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit && arr[i]>t)
            t=arr[i]; }
    return 0; }
int main() {
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++)
  {   getMaxLessThan(100000);
      printf("%d\n",t);
     for(i=0;i<n;i++)
     {if(arr[i]==getMaxLessThan(100000))
     arr[i]=0;}}
    return 0; }