#include <stdio.h>
       int peak (int a,int b,int c){
       if((b>a)&&(b>c))
           return b; }
    int main (){
       int i,n,x,sum;
       sum=0;
   scanf("%d",&n);
   int p[n];
   for(i=0;i<n-2;i++){
       scanf("%d",&p[i]);
       scanf("%d",&p[i+1]);
       scanf("%d",&p[i+2]);
     x= peak (p[i],p[i+1],p[i+2]);
      if(x==p[i+1]){
          sum=sum+1; } }
   printf("%d",sum);
      return 0; }