#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int upperLimit)
{   int max,i;
    max=arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>arr[0]) {
            max=arr[i]; } }
return max; }
int main() {
  int k,i,p;
  scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
      p=getMaxLessThan(n);
    printf("%d\n",p);
    return 0; }