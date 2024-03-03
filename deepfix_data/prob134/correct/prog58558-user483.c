#include <stdio.h>
#include <stdlib.h>
int fact(int r) {
    int ans=1,i;
    for(i=0;i<r;i++)
    ans=ans*(i+1);
    return ans; }
int B(int n,int k) {
    int flag=0;
    if(n<k) {
        return flag; }
    else if((n==k)||(k=0)) {
        return flag=1; }
  else if((k>=0)&&(n>=0)) {
return ((fact(n-1))/(fact(k)*fact(n-1-k)))+(fact(n-1))/((fact(k-1)*fact(n-1-k))); }
  else
  return 0; }
int main() {
int n,k,b;
scanf("%d",&b);
printf("%d",B(n,k));
return 0; }