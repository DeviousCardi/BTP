#include <stdio.h>
#include <limits.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0,j=0;
    for(j;j<=n-1;j++) {
       if(arr[j]>max)
       {    if(arr[j]<upperLimit)
           {max=arr[j];} } }
    return max; }
int main() {
    int i,k;
    scanf("%d %d",&n,&k);
    i=0;
    for(i;i<=n-1;i++) {
        scanf("%d",&arr[i]); }
    i=0;
    int q=INT_MAX;
    for(i;i<=k-1;i++)
    {   printf("1");
        int p=getMaxLessThan(q);
        printf("%d\n",p);
        q=p; }
  return 0; }