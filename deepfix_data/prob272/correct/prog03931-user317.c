#include <stdio.h>
int cal(int,int,int);
int main(){
 int a1,a2,n;
 scanf("%d %d %d",&a1,&a2,&n);
 int x=cal(a1,a2,n);
    printf("%d",x);
    return 0; }
int cal(int a2,int a1,int n){
 int c=a2+a1-2;
  if(n==1)
  return a1;
  else if(n==2)
  return a2;
  else
  return
  cal(c,a2,n-1); }