#include <stdio.h>
int main() {
  int n,i,j,count,flag;
  scanf("%d", &n);
  int a[100];
  for(i=0;i<n;i++) {
      scanf("%d", &a[i]); }
  for(i=0;i<2*n;i++) {
      if(i%2==0) {
        count=0;
        for(j=0;j<2*n;j++) {
                 if(a[j]==a[i])
                 count=count+1; }
        if(count==a[i]) {
           flag=1;
           continue; }
        else {
            flag=0;
            break; } }
      else
      break; }
  if(flag==0)
  printf("No");
  else
  printf("Yes");
return 0; }