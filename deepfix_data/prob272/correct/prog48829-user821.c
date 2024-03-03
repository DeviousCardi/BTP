#include <stdio.h>
int main(){
    int i, a1, a2, n;
    int Tn=a1+a2-2;
     scanf("%d%d%d",&a1,&a2,&n);
     if(n==1)
         Tn=a1;
         if(n==2)
         Tn=a2;
        if(n>2) {
     for(i=3;i<=n;i=i+1) {
          if(n>2) {
         Tn=a1+a2-2;
         a1=a2;
         a2=Tn; } } }
         printf("%d",Tn);
     return 0; }