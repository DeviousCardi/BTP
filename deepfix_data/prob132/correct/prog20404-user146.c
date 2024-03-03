#include <stdio.h>
int main() {
  int i,n,m,j,count=0;
  scanf("%d",&n);
  int a[100];
  for(i=0;i<n;i++){
      scanf("%d,",&a[i]); }
  for(i=0;i<n;i++){
      if(i%2==0){
      m=0;
      for(j=1;j<n;i++){
          if(a[i]==a[j])
          count=count+1;
          m=1; }
      if(count==a[i])
      m=1;
      else
      m=0;}
  } if(m==1)
    printf("yes");
    else if(m==0)
    printf("No");
    return 0; }