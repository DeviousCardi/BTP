#include <stdio.h>
int main(){
 int i,sum=0,t;
 char n;
 for(i=0;i<4;i++){
 scanf("%c",&n);
 sum=sum+n;}
 for(i=0;i<10000;i++){
    t=2016+i;
     if(t%sum==0){
    printf("%d",t);
     return 0; } }
    return 0; }