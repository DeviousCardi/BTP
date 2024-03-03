#include <stdio.h>
int arr[100]={0};
int t,n,k;
int getMaxLessThan(int upperLimit) {
    int i;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>t)
            t=arr[i];
    }arr[i]=0;
    return t; }
int main() {
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++)
  {  printf("%d\n",getMaxLessThan(100000));
     for(i=0;i<n;i++)
     {if(arr[i]==getMaxLessThan(100000))
     arr[i]=0;}}
    return 0; }