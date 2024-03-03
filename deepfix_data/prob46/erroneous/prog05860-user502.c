#include <stdio.h>
int main(){
  int n,m,p,i;
  p=0;
  scanf("%d,%d",&n,&m);
  for(i=2,i<=n,i++){
      if(n%i==0){
          p++; } }
   if(p==m){
       printf("YES");
   }else printf("NO");
    return 0; }