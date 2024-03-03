#include <stdio.h>
#include <stdlib.h>
int maximum(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
  int n,i,max;
  int sorted[10000];
  int count[10000];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",sorted[i]); }
  for(i=0;i<n;i++) {
      count[i]=1; }
  for(i=0;i<n;i++)
  {   j=i;
      while(sorted[j]=sorted[j++])
      {count[i]++;
       j++; } }
  for(i=0;i<n;i++) {
      max=maximum(count[i],count[i+1]); }
  printf("%d",max);
	return 0; }