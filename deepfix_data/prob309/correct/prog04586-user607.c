#include <stdio.h>
int main()
{  int n,i,j,a,t=0;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   scanf("%d,",&arr[i]);
  for(i=0;i<n;i++)
  {a=arr[i];
  for(j=0;j<n;j++)
  if (a==arr[j]) t++;
  if (a!=t) {printf("No");
             break;} }
    return 0; }