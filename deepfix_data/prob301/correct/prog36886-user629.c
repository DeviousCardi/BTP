#include <stdio.h>
#include <stdlib.h>
int maximum(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
  int n,i=0,j,max;
  int sorted[10000];
  int count[10000];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d", &sorted[i]); }
  for(i=0;i<n;i++) {
      count[i]=1; }
  while(i<n)
  {   j=i;
      while(sorted[j]==sorted[j+1])
      {count[i]++;
       j++; }
      i=j+1; }
  for(i=0;i<n;i++) {
      if(count[i]>count[i+1]) {
          max=sorted[i]; }
      else max=sorted[i+1]; }
  printf("%d",max);
	return 0; }