#include <stdio.h>
int main() {
    int n,i,k,j;
     scanf("%d",&n);
    int arr[n];
    for(i=0;i<(n-1);i++)
     scanf("%d,",&arr[i]);
     scanf("%d",&arr[n-1]);
  for(i=0;i<n;i++) {
      k=arr[i];int count=0;
      for(j=0;j<n;j++)
      {if (arr[i]==arr[j]&&i!=j)
      count++;}
      if(count==k)
      printf("Yes");
      else
      printf("N0"); }
    return 0; }