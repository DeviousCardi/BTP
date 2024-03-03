#include <stdio.h>
int main()
{  int n,i,j;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(arr[i]==arr[j]) {printf("%d\n",arr[i]);
                         break; }
     for(i=0;i<n;i++)
    { if (arr[i]==i+1)break;
     else printf("%d",arr[i]); }
    return 0; }