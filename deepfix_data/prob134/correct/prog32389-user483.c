#include <stdio.h>
#include <stdlib.h>
int fact(int r) {
    double ans=1,i;
    for(i=0;i<r;i++)
    ans=ans*(i+1);
    return ans; }
int B(int n,int k) {
    int flag=0;
    if(n<k) {
        return flag; }
    else if(k==0) {
        return flag=1; }
  else if((n>=0)&&(k>=0)&&(n>=k)) {
return (fact(n))/(fact(k)*fact(n-k)); }
  else
  return 0; }
int main() {
int n,k,b;
scanf("%d",&b);
printf("%d",B(20,9));
return 0; }