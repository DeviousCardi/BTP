#include <stdio.h>
int n,k;
int check(int arr[],int i,int sum) {
  if(sum>k)
   return 0;
  if(sum==k)
   return 1;
  if(sum<k && i>n)
   return 0;
  if(check(arr,i+1,sum+arr[i]))
    return 1;
  else
      if(check(arr,i+1,sum))
         return 1;
      else
         return 0; }
int main() {
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++)
      scanf("%d",arr+i);
    int x=check(arr,0,0);
    if(x==1)
      printf("YES");
    else
     printf("NO");
    return 0; }