#include <stdio.h>
int main()
{  int n,i,j,t;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(arr[i]==arr[j]) {printf("%d\n",arr[i]);
                         break; }
     for(i=0;i<n;i++)
     {   t=0;
         for(j=0;j<n;j++)
              { if (arr[j]==i+1) break;
                else t++; }
          if(t==n)  printf("%d",(i+1)); }
    return 0; }