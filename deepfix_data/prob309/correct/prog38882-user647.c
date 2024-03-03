#include <stdio.h>
int main()
{ int k,i,j,count=0;
  scanf("%d",&k);
  int a[k];
  int c[1000];
  char b[k];
  for(i=0;i<k;i++){
      scanf("%d",&a[i]);
      c[a[i]]=c[a[i]]+1;
      scanf("%c",&b[i]); }
  for(j=0;j<k;j++){
      if((c[a[j]])!=(a[j])){
          count=1;
          break; } }
  if(count==0){
      printf("Yes");}
    else printf("No");
    return 0; }