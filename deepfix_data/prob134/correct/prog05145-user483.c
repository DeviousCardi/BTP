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
return (fact(n)/(fact(k)*fact(n-k))); }
  else
  return 0; }
int main() {
int n,k,b;
scanf("%d",&b);
printf("%d",B(6,3));
return 0; }