#include <stdio.h>
int arr[100]={0};
int t,n,k;
int getMaxLessThan(int upperLimit) {
    int i,h;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>t)
            t=arr[i];h=i; }
    return t; }
int main() {
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++)
  {  printf("%d\n",getMaxLessThan(100000));
     arr[h]=0;}
    return 0; }