#include <stdio.h>
int main(){
  int a1,a2,n,Tn;
  scanf("%d%d%d",&a1,&a2,&n);
  if (a2==2){
      Tn = a2;
      printf(Tn); }
  else if(a1==1){
      Tn = a1;
      printf(a1); }
  else{
      for(i=3;i<=n;i++){
          Tn = a1+a2-2;
          a1 = a2;
          a2 = Tn; }
      printf(Tn); }
    return 0; }