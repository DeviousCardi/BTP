#include <stdio.h>
int main() {
  int n,i,j,k,count,flag=2;
  scanf("%d", &n);
  int a[100];
  k=2*n;
  for(i=0;i<k;i++) {
      scanf("%d", &a[i]); }
  for(i=0;i<k;i++) {
      if(i%2==0) {
        count=0;
        for(j=0;j<k;j++) {
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
  else {
      if(flag==1)
      printf("Yes"); }
return 0; }