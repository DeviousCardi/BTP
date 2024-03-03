#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int i,p,m,t;
    scanf("%d",&m);
    for(t=1;t<=m;t++){
 scanf("%d",&p);
  for(i=0;i<=10;i++){
      if(p<cat(i)){
     printf("%d\n",cat(i));
      break;}}}
      return 0;}
 int cat(int n){
 int j=0;
     if(n==0)
     return 1;
     else if(j<=n-1)
    { j=j+1;
     return cat(j-1)*cat(n-j+1);}
    else
    return 2; }