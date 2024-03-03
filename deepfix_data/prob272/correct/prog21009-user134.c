#include <stdio.h>
int main(){
    int a1,a2,n,t1,t2,tn,i;
    scanf("%d%d%d",&a1,&a2,&n);
if(n==1) {
    t1=a1; }
else if(n==2) {
    t2=a2; }
else if(n>2) {
  tn=t1+t2-2; }
for(i=1;i<=n;i++) {
    tn=tn+i;
    printf("%d",tn); }
    return 0; }