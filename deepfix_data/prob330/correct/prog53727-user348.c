#include <stdio.h>
       int peak (int a,int b,int c){
       if((b>a)&&(b>c))
       return b; }
    int main (){
       int i,n;
   scanf("%d",&n);
   int p[n];
   for(i=0;i<n;i++){
       scanf("%d",&p[i]);
       scanf("%d",&p[i+1]);
       scanf("%d",&p[i+2]);
       peak (p[i],p[i+1],p[i+2]); }
      return 0; }