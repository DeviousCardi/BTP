#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i,t,j;
  int rowpeak[20];
  scanf("%d", &n);
  for(i=0;i<n;i++)
  scanf("%d",&rowpeak[i]);
  scanf("%d",&t);
  for(i=0;i<t;i++) {
      scanf("%d",&j);
      if(j==0) {
        if(rowpeak[0]>rowpeak[1])
        printf("Yes");
        else
        printf("No"); }
      else if(j==(n-1)) {
        if(rowpeak[n-1]>rowpeak[n-2])
        printf("Yes");
        else
        printf("No"); }
      else {
          if(rowpeak[j]>rowpeak[j-1] && rowpeak[j]>rowpeak[j+1])
          printf("Yes");
          else
          printf("No"); }
      printf("\n"); }
	return 0; }