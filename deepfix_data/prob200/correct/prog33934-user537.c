#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=arr[0];
        for(int j=0;j<n;j++) {
            if(max<arr[j])
            max=arr[j]; }
        return max; }
int main()
{ int k,c;
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(int j=0;j<k;j++) {
      c=getMaxLessThan(n);
      printf("%d",c); }
    return 0; }