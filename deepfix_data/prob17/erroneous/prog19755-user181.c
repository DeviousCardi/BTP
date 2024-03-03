#include <stdio.h>
int check(int arr[],int sub[],int i,int m)
{int k=0
  while(arr[i+k]==sub[k++]);
  if(k==m)
  return 1;
  return 0; }
int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int m;
  scanf("%d",&m);
  int sub[m];
  for(int i=0;i<m;i++)
  scanf("%d",&sub[i]);
  int d=0;
  for(int i=0;i<n-m+1;i++) {
      if(arr[i]==sub[0])
      { d=check(arr,sub,i,m);
  if(d) {
      printf("YES");
       break; } }
      if(!d)
      printf("NO");
  return 0;
	return 0; }