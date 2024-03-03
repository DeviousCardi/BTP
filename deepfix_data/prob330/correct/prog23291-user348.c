#include <stdio.h>
       int peak (int a,int b,int c){
       if((b>a)&&(b>c))
       return b; }
    int main (){
       int i,n;
   scanf("%d",&n);
   for(i=0;i<100;i++){
       int n[i];
       scanf("%d",&n[i]);
       scanf("%d",&n[i+1]);
       scanf("%d",&n[i+2]);
       peak (n[i],n[i+1],n[i+2]); }
      return 0; }