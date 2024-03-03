#include <stdio.h>
int arr[100]={0};
int n,m;
int getMaxLessThan(int upperLimit)
{ int i,max;
    max=arr[0];
    for(i=0;i<n;i++)
    if(arr[i]<upperLimit) {
        if(arr[i]>max)
        max=arr[i]; }
    return max; }
int main()
{int upper,c,i,j;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  upper=getMaxLessThan(100);
  printf("%d\n",upper);
  for(j=0;j<m-1;j++)
  {c=getMaxLessThan(upper);
  upper=c;
  printf("%d\n",c); }
    return 0; }