#include <stdio.h>
int main() {
  int n,i,j,count,flag=2;
  scanf("%d", &n);
  int a[100];
  for(i=0;i<n;i++) {
      scanf("%d,", &a[i]); }
  for(i=0;i<n;i++) {
        count=0;
        for(j=0;j<n;j++) {
                 if(a[j]==a[i])
                 count=count+1; }
        if(count==a[i]) {
           flag=1;
           continue; }
        else {
            flag=0;
            break; } }
  if(flag==0)
  printf("No");
  else {
      if(flag==1)
      printf("Yes"); }
return 0; }