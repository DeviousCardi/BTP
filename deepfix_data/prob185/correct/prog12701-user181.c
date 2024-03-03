#include <stdio.h>
int search(int start,int end,int key,int a[],int sum) {
    if(start>end)
    return 0;
    if(sum==key)
    return 1;
    return(search(start+1,end,key,a,sum+a[start])||search(start+1,end,key,a,sum)); }
int main() {
    int n,s;
    scanf("%d",&n,&s);
    int arr[n];
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  int d=search(0,n-1,s,arr,0);
  if(d)
  printf("YES");
  else
  printf("NO");
    return 0; }