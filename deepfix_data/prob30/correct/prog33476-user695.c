#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int upperlimit)
{   int max,i;
    max=arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i]; } }
return max; }
int main() {
  int k,i,p,d;
  scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
      p=getMaxLessThan(n);
    printf("%d\n",p);
    d=getMaxLessThan(n-1);
    printf("%d",d);
    return 0; }