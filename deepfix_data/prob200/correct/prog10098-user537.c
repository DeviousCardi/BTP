#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=arr[0],j;
        for(j=0;j<upperLimit;j++) {
            if(max<arr[j])
            max=arr[j]; }
        return max;
        max=0; }
int main()
{ int k,c;
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(int j=0;j<k;j++) {
      c=getMaxLessThan(n);
      printf("%d\n",c); }
    return 0; }