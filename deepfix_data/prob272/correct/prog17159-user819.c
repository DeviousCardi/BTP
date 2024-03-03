#include <stdio.h>
int main() {
  int a1,a2,n,Tn;
  scanf("%d%d%d",&a1,&a2,&n);
  if (n==2){
      Tn = a2; }
  else if(n==1){
      Tn = a1; }
  else{
      for(int i=3;i<=n;i++){
          Tn = a1+a2-2;
          a1 = a2;
          a2 = Tn; }
      printf("%d",Tn); }
    return 0; }