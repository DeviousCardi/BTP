#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=arr[0];
    for(int i=0;i<k;i++) {
        for(int j=0;j<n;j++) {
            if(max<a[j])
            max=a[j]; }
        return max; } }
int main()
{ int k,c;
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  c=getMaxLessThan(n);
  printf("%d",c);
    return 0; }