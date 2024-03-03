#include <stdio.h>
int main(){
    int n,q,r,s,i;
    scanf("%d",&n);
    q=n;s=0;
    while(q!=0) {
        r=q%10;
        q=q/10;
        s=s+r; }
 for(i=2016; ;i++) {
     if(i%s==0) {
         printf("%d",i);
         break; } }
    return 0; }