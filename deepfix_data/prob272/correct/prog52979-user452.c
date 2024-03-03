#include <stdio.h>
int main(){
    int i,a1,a2,n,next,pre,curr;
    scanf("%d%d%d",&a1,&a2,&n);
    curr=a2;
    pre=a1;
for(i=3;i<=n;i++){
    curr=pre;
    curr=curr+pre-2;
    curr=next; }
  printf("%d",next);
    return 0; }