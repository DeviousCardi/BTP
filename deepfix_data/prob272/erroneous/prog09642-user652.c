#include <stdio.h>
int t(n) {
    if(n==1){
        t(n)=a1;}
     if(n==2){
         t(n)=a2;}
     if(n>2){
         t(n)=t(n-1)+t(n-2)-2;}
    return t(n); }
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    return 0; }