#include <stdio.h>
int main(){
 int m,n;
 scanf("%d%d",&m,&n);
 int i,l;
 for(i=2;i<n;i++){
     if((n%i)==0){
         l=l+1;}
         else { continue;} }
 scanf("%d",&l);
 if(m==l){
     printf("YES");}
 else{printf("NO");}
    return 0; }