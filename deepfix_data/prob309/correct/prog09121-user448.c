#include <stdio.h>
int main() {
    int n,i,j,count=0,flag=0;
    int a[100];
    char b[100];
    scanf("%d",&n);
    for (i=0;i<(2*n)+1;i=i+1){
        scanf("%d",&a[i]);
        scanf("%c",&b[i]); }
  for (j=0;j<n;j++){
      for (i=0;i<n;i++){
          if (a[i]==a[j]){
              count++; } }
      if (count==a[j]){
          count=0;
          continue; }
      else{
          printf("No");
          flag=1;
          break; } }
  if (flag!=1){
      printf("Yes"); }
    return 0; }