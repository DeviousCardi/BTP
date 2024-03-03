#include <stdio.h>
int main(){
 int n,i,j,a;
 scanf("%d",&n);
 for(i=1;i<=n;i++) {
     for(j=1;j<=n;j++) {
         scanf("%d",a);
         if(i==j) {
             if(a==1)
             {count=1;}
             else
             {count=0;
                 break; } }
         else{
             if(a==0)
             {count=1;}
             else
             {count=0;
             break;} } } }
    return 0; }