#include <stdio.h>
int main(){
 int n,i,r,r1,s=0,k,s1;
 scanf("%d",&n);
 r=n;
 for(i=1;r>0;i++) {
     r1=r%10;
     s=s+r1;
     r=r/10; }
 s1=s;
 k=2016%s1;
for(i=0;k!=0;i++) {
    k=(2016+i)%s1; }
printf("%d",2016+i);
    return 0; }