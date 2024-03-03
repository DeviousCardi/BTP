#include <stdio.h>
int main() {
  int i,n,m,j;
  scanf("%d",&n);
  int a[100];
  for(i=0;i<n;i++){
      scanf("%d,",&a[i]); }
  for(i=0;i<n;i++){
      if(i%2==0){
      int count=0;
      for(j=0;j<n;j++){
          if(a[i]==a[j])
          count=count+1; }
      if(count==a[j])
      m=1;
      else
      m=0;}
      else
      continue;
  } if(m==1)
    printf("Yes");
    else if(m==0)
    printf("No");
    return 0; }