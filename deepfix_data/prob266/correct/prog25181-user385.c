#include <stdio.h>
int main(){
 int n,i,r,r1,s=0;
 scanf("%d",&n);
 r=n;
 for(i=1;r>0;i++) {
     r1=r%10;
     s=s+r;
     r=r/10; }
    printf("%d",s-n);
    return 0; }