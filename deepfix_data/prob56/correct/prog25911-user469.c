#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int i,p,m,t;
    scanf("%d",&m);
    for(t=1;t<=m;t++){
 scanf("%d",&p);
  for(i=0;i<=10;i++){
      if(p<cat(i,2)){
     printf("%d\n",cat(i,2));
      break;}}}
      return 0;}
 int cat(int n,int j){
    if(n==0||n==1)
    return 1;
    else if(j!=n-1){
    j=j+1;
    return (n+j)/j;}
    else
    return 2; }